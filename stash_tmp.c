diff --git a/ft_isprint.c b/ft_isprint.c
index e276463..989d7a5 100644
--- a/ft_isprint.c
+++ b/ft_isprint.c
@@ -14,7 +14,7 @@
 
 int	ft_isprint(int c)
 {
-	if (c >= 0x20 && c <= 0x7E)
+	if (c >= 32 && c <= 126)
 		return 1;
 	else
 		return 0;
diff --git a/ft_memchr.c b/ft_memchr.c
index 72c609e..8f73db9 100644
--- a/ft_memchr.c
+++ b/ft_memchr.c
@@ -16,10 +16,26 @@ void	*ft_memchr(const void *s, int c, size_t n)
 {
 	unsigned const char	*tmp_s;
 	size_t				i;
+	unsigned char		tmp_c;
 
 	tmp_s = (unsigned const char *)s;
+	tmp_c = (unsigned char)c;
 	i = 0;
-	while ((i < n || tmp_s[i] != (unsigned char)c) && tmp_s[i] != '\0')
-		i++;
-	return ((unsigned char *)&s[i]);
+	while (i < n)
+	{
+		if (tmp_s[i] == tmp_c)
+			return (*tmp_s[i]);
+		i += 1;
+	}
+	return (NULL);
 }
+// {
+// 	unsigned const char	*tmp_s;
+// 	size_t				i;
+
+// 	tmp_s = (unsigned const char *)s;
+// 	i = 0;
+// 	while ((i < n || tmp_s[i] != (unsigned char)c) && tmp_s[i] != '\0')
+// 		i++;
+// 	return ((unsigned char *)&s[i]);
+// }
diff --git a/ft_memcpy.c b/ft_memcpy.c
index 4babf96..e6d9b5c 100644
--- a/ft_memcpy.c
+++ b/ft_memcpy.c
@@ -11,7 +11,6 @@
 /* ************************************************************************** */
 
 #include <string.h>
-// #include <stdio.h>
 
 void		*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
 {
diff --git a/ft_memset.c b/ft_memset.c
index e5b7814..da41c6b 100644
--- a/ft_memset.c
+++ b/ft_memset.c
@@ -16,14 +16,16 @@
 void				*ft_memset(void *s, int c, size_t n)
 {
 	unsigned char	*tmp;
+	unsigned char	*end;
 
 	tmp = (unsigned char *)s;
-	while (n != 0)
+	end = (unsigned char *)(s + n);
+	while (tmp < end)
 	{
-		tmp[n - 1] = c;
-		n--;
+		*tmp = c;
+		tmp++;
 	}
-	return s;
+	return tmp;
 }
 
 // int					main(void)
diff --git a/ft_strchr.c b/ft_strchr.c
index 4bc8155..29fdd9f 100644
--- a/ft_strchr.c
+++ b/ft_strchr.c
@@ -9,6 +9,7 @@
 /*   Updated: 2021/04/23 17:55:36 by hmeriann         ###   ########.fr       */
 /*                                                                            */
 /* ************************************************************************** */
+/** находит первое появление заданного символа в строке.**/
 
 #include <string.h>
 
@@ -30,5 +31,4 @@ char	*ft_strchr(const char *s, int c)
 				return ((char *)s);
 			tmp_s++;
 	}
-	return (0);
 }
