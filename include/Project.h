#pragma once
//рассчет оплаты исходя из участия (бонусы от участия в проекте)
class Project {
public:
	Project() {}
	virtual int ProjectPaymentMethod(int budget, double deposit) = 0;
	~Project() {}
};
