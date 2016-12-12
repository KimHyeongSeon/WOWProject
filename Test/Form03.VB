Public Class Form3
    Dim fg(0 To 4) As Integer
    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        Dim i As Integer
        For i = 0 To 4
            fg(i) = InputBox((i + 1) & "점수 입력?", "점수 입력창")
            TextBox1.Text += (1 + i) & "번 :" & fg(i) & vbCrLf
        Next
    End Sub

    Private Sub Button2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button2.Click
        Dim m, n As Integer
        최고점최하점구하기()
        m = 총점구하기()
        TextBox4.Text = m
        n = m / 5
        TextBox5.Text = n
    End Sub
    Private Sub 최고점최하점구하기()
        Dim a, b, c, d As Integer
        a = fg(0)
        For b = 1 To 4
            If a < fg(b) Then
                a = fg(b)
            End If
        Next b
        TextBox2.Text = a
        c = fg(0)
        For d = 1 To 4
            If c > fg(d) Then
                c = fg(d)
            End If
        Next d
        TextBox3.Text = c
    End Sub
    Private Function 총점구하기()
        Dim g, k As Integer
        For k = 0 To 4
            g = g + fg(k)

        Next k
        Return g
    End Function
End Class
