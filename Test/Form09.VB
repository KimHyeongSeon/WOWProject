Public Class Form9

    Private Sub Button2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button2.Click
        End

    End Sub

    Private Sub Form1_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        TextBox1.Text = ""
        TextBox2.Text = ""
        TextBox3.Text = ""
    End Sub

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        Dim i, dou, sol, nam, cou As Integer
        For i = 1 To Val(TextBox1.Text)
            cou = cou + 1
            nam = cou Mod 2
            If nam = 0 Then
                dou += cou
            Else
                sol += cou
            End If
        Next i

        TextBox2.Text = dou
        TextBox3.Text = sol
    End Sub
End Class
