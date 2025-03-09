

class Fixed
{
private:
	static const int F_BITS_COUNT = 8; //sabit bit sayısı yani sayılar 2 üzeri 8 ile 256 ile çarpılarak saklanır
	int data; //sabit noktali sayi

public:
	Fixed(); //default constructor //nesne oluşturur ve başlatır
	Fixed(const Fixed& from);//kopya constructor //bir nesne oluştururken kulllanılır ama başka nesneden kopyalayıp yeniymiş gibi yapar
	~Fixed();//destructor

	Fixed& operator=(const Fixed& from);//copy assignment operator atama oparatörü //var olan nesnenin içeriğini değiştirir

	int getRawBits(void) const;//ham değeri döndürür
	void setRawBits(int const raw);//ham değeri ayarlar
	//ham değer şu int için 10.5 float için 10.5 * 2 üzeri 8 = 2688 olur burdaki 2688 değeri hamdır
	
};
