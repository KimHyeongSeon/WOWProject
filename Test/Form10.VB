Public Class Form10

    Private Sub Button2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button2.Click
        End
    End Sub

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        TextBox1.Text = ""
        TextBox2.Text = ""
        TextBox3.Text = ""
        TextBox4.Text = ""
        TextBox5.Text = ""
        TextBox6.Text = ""
    End Sub

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        If TextBox1.Text = "A" Then
            TextBox3.Text = "에쿠스"
            TextBox5.Text = TextBox2.Text
            TextBox4.Text = "800"
            TextBox6.Text = 800 * Val(TextBox2.Text)
        ElseIf TextBox1.Text = "B" Then
            TextBox3.Text = "다이너스티"
            TextBox5.Text = TextBox2.Text
            TextBox4.Text = "500"
            TextBox6.Text = 500 * Val(TextBox2.Text)
        ElseIf TextBox1.Text = "C" Then
            TextBox3.Text = "뉴 그랜저"
            TextBox5.Text = TextBox2.Text
            TextBox4.Text = "450"
            TextBox6.Text = 450 * Val(TextBox2.Text)
        ElseIf TextBox1.Text = "D" Then
            TextBox3.Text = "아반떼"
            TextBox5.Text = TextBox2.Text
            TextBox4.Text = "250"
            TextBox6.Text = 250 * Val(TextBox2.Text)
        Else
            MsgBox("제품코드를 잘못 입력하였습니다!", , "에러")



        End If
    End Sub
End Class
