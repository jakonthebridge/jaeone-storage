using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
            this.loginButton.Click += this.buttonClicked; //상태 변화1
            this.logoutButton.Click += this.buttonClicked;
            this.inquireButton.Click += this.buttonClicked;
            this.axKHOpenAPI1.OnEventConnect += this.axKHOpenAPI_OnEventConnect;
            this.axKHOpenAPI1.OnReceiveTrData += this.axKHOpenAPI_OnReceiveTrData;
        }

        public void buttonClicked(object sender, EventArgs e) //로그인버튼. 클릭 이벤트시 버튼이 눌려졌음으로 변화
        {
            if (sender.Equals(this.loginButton))
            {
                if (axKHOpenAPI1.CommConnect() == 0)
                    this.listBox1.Items.Add("로그인 시작");
                else
                    this.listBox1.Items.Add("로그인 실패");
            }
            else if(sender.Equals(this.logoutButton))
            {
                axKHOpenAPI1.CommTerminate();
                this.listBox1.Items.Add("로그아웃");
            }
            else if(sender.Equals(this.inquireButton))
            {
                axKHOpenAPI1.SetInputValue("종목코드", this.itemCodeTextBox.Text.Trim());

                int nRet = axKHOpenAPI1.CommRqData("주식기본정보", "OPT10001", 0, "1001");
                if (nRet == 0)
                    this.listBox1.Items.Add("주식 정보요청 성공");
                else
                    this.listBox1.Items.Add("주식 정보요청 실패");
            }
        }
        private void axKHOpenAPI_OnEventConnect(object sender, AxKHOpenAPILib._DKHOpenAPIEvents_OnEventConnectEvent e)
        {
            if (e.nErrCode == 0)
            {
                this.listBox1.Items.Add("로그인 성공");
                if (this.axKHOpenAPI1.GetConnectState() == 1)
                    this.listBox1.Items.Add("접속상태:연결중");
                else if (this.axKHOpenAPI1.GetConnectState() == 0)
                    this.listBox1.Items.Add("접속상태:미연결");
            }
            else
                this.listBox1.Items.Add("로그인 실패");
        }

        private void axKHOpenAPI_OnReceiveTrData(object sender, AxKHOpenAPILib._DKHOpenAPIEvents_OnReceiveTrDataEvent e)
        {
            if(e.sRQName == "주식기본정보")
            {
                int nCnt = axKHOpenAPI1.GetRepeatCnt(e.sTrCode, e.sRQName);
                for (int nIdx = 0; nIdx < nCnt; nIdx++)
                {
                    this.listBox2.Items.Add("종목코드" + axKHOpenAPI1.GetCommData(e.sTrCode, e.sRQName, nIdx, "종목코드"));
                    this.listBox2.Items.Add("종목명" + axKHOpenAPI1.GetCommData(e.sTrCode, e.sRQName, nIdx, "종목명"));
                    this.listBox2.Items.Add("거래량" + axKHOpenAPI1.GetCommData(e.sTrCode, e.sRQName, nIdx, "거래량"));
                    this.listBox2.Items.Add("시가" + axKHOpenAPI1.GetCommData(e.sTrCode, e.sRQName, nIdx, "시가"));
                    this.listBox2.Items.Add("고가" + axKHOpenAPI1.GetCommData(e.sTrCode, e.sRQName, nIdx, "고가"));
                    this.listBox2.Items.Add("저가" + axKHOpenAPI1.GetCommData(e.sTrCode, e.sRQName, nIdx, "저가"));
                    this.listBox2.Items.Add("현재가" + axKHOpenAPI1.GetCommData(e.sTrCode, e.sRQName, nIdx, "현재가"));
                    this.listBox2.Items.Add("등략율" + axKHOpenAPI1.GetCommData(e.sTrCode, e.sRQName, nIdx, "등략율"));
                }
            }
        }

        
    }


}
