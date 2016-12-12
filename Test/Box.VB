Public Class Form1

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        Dim obj As New Box(Val(TextBox1.Text), Val(TextBox2.Text), Val(TextBox3.Text))
        TextBox4.Text = obj.vol(obj.a, obj.b, obj.c)
    End Sub
End Class



Public Class Box
    Public a, b, c As Integer
    Public Sub New(ByVal d As Integer, ByVal e As Integer, ByVal f As Integer)
        a = d
        b = e
        c = f
    End Sub
    Public Function vol(ByVal d As Integer, ByVal e As Integer, ByVal f As Integer)
        Return d * e * f
    End Function
End Class
