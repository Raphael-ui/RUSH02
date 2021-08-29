char	ft_putnbr(int nb)
{
	int		unit;
	long	storage;
	char str;

	storage = nb;
	unit = 0;
	unit = storage % 10 + '0';
	/*
	if (storage >= 10)
		ft_putnbr(storage / 10);
	*/
	str = nb + '0';
	return (str);
}
