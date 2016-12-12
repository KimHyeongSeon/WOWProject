Public Class Form1

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click

        If TextBox1.Text = "Visual Basic" Then
            MsgBox(TextBox1.Text & "은 아주 좋습니다!")
        Else
            MsgBox(TextBox1.Text & "이 아닙니다")
        End If
    End Sub

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        TextBox1.Text = ""
    End Sub
End Class
