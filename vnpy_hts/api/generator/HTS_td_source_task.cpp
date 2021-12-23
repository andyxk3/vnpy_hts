    void TdApi::OnFrontConnected()
{
	Task task = Task();
	task.task_name = ONFRONTCONNECTED;
	this->task_queue.push(task);
};

    void TdApi::OnFrontDisconnected(int nReason) 
{
	Task task = Task();
	task.task_name = ONFRONTDISCONNECTED;
	task.task_id = nReason;
	this->task_queue.push(task);
};

    void TdApi::OnRtnNotice(DFITCSECRspNoticeField *pNotice) 
{
	Task task = Task();
	task.task_name = ONRTNNOTICE;
	if (pNotice)
	{
		DFITCSECRspNoticeField *task_data = new DFITCSECRspNoticeField();
		*task_data = *pNotice;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspError(DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPERROR;
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspStockUserLogin(DFITCSECRspUserLoginField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKUSERLOGIN;
	if (pData)
	{
		DFITCSECRspUserLoginField *task_data = new DFITCSECRspUserLoginField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspStockUserLogout(DFITCSECRspUserLogoutField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKUSERLOGOUT;
	if (pData)
	{
		DFITCSECRspUserLogoutField *task_data = new DFITCSECRspUserLogoutField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspStockUserPasswordUpdate(DFITCSECRspPasswordUpdateField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKUSERPASSWORDUPDATE;
	if (pData)
	{
		DFITCSECRspPasswordUpdateField *task_data = new DFITCSECRspPasswordUpdateField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspStockEntrustOrder(DFITCStockRspEntrustOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKENTRUSTORDER;
	if (pData)
	{
		DFITCStockRspEntrustOrderField *task_data = new DFITCStockRspEntrustOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspStockWithdrawOrder(DFITCSECRspWithdrawOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKWITHDRAWORDER;
	if (pData)
	{
		DFITCSECRspWithdrawOrderField *task_data = new DFITCSECRspWithdrawOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspStockQryEntrustOrder(DFITCStockRspQryEntrustOrderField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKQRYENTRUSTORDER;
	if (pData)
	{
		DFITCStockRspQryEntrustOrderField *task_data = new DFITCStockRspQryEntrustOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspStockQryRealTimeTrade(DFITCStockRspQryRealTimeTradeField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKQRYREALTIMETRADE;
	if (pData)
	{
		DFITCStockRspQryRealTimeTradeField *task_data = new DFITCStockRspQryRealTimeTradeField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspStockQrySerialTrade(DFITCStockRspQrySerialTradeField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKQRYSERIALTRADE;
	if (pData)
	{
		DFITCStockRspQrySerialTradeField *task_data = new DFITCStockRspQrySerialTradeField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspStockQryPosition(DFITCStockRspQryPositionField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKQRYPOSITION;
	if (pData)
	{
		DFITCStockRspQryPositionField *task_data = new DFITCStockRspQryPositionField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspStockQryCapitalAccountInfo(DFITCStockRspQryCapitalAccountField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKQRYCAPITALACCOUNTINFO;
	if (pData)
	{
		DFITCStockRspQryCapitalAccountField *task_data = new DFITCStockRspQryCapitalAccountField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspStockQryAccountInfo(DFITCStockRspQryAccountField *pData, DFITCSECRspInfoField *pRspInfo)  
{
	Task task = Task();
	task.task_name = ONRSPSTOCKQRYACCOUNTINFO;
	if (pData)
	{
		DFITCStockRspQryAccountField *task_data = new DFITCStockRspQryAccountField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspStockQryShareholderInfo(DFITCStockRspQryShareholderField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPSTOCKQRYSHAREHOLDERINFO;
	if (pData)
	{
		DFITCStockRspQryShareholderField *task_data = new DFITCStockRspQryShareholderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspStockTransferFunds(DFITCStockRspTransferFundsField *pData,DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKTRANSFERFUNDS;
	if (pData)
	{
		DFITCStockRspTransferFundsField *task_data = new DFITCStockRspTransferFundsField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspStockEntrustBatchOrder(DFITCStockRspEntrustBatchOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKENTRUSTBATCHORDER;
	if (pData)
	{
		DFITCStockRspEntrustBatchOrderField *task_data = new DFITCStockRspEntrustBatchOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspStockWithdrawBatchOrder(DFITCStockRspWithdrawBatchOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKWITHDRAWBATCHORDER;
	if (pData)
	{
		DFITCStockRspWithdrawBatchOrderField *task_data = new DFITCStockRspWithdrawBatchOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspStockCalcAbleEntrustQty(DFITCStockRspCalcAbleEntrustQtyField *pData, DFITCSECRspInfoField *pRspInfo)  
{
	Task task = Task();
	task.task_name = ONRSPSTOCKCALCABLEENTRUSTQTY;
	if (pData)
	{
		DFITCStockRspCalcAbleEntrustQtyField *task_data = new DFITCStockRspCalcAbleEntrustQtyField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspStockCalcAblePurchaseETFQty(DFITCStockRspCalcAblePurchaseETFQtyField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKCALCABLEPURCHASEETFQTY;
	if (pData)
	{
		DFITCStockRspCalcAblePurchaseETFQtyField *task_data = new DFITCStockRspCalcAblePurchaseETFQtyField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspStockQryFreezeFundsDetail(DFITCStockRspQryFreezeFundsDetailField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPSTOCKQRYFREEZEFUNDSDETAIL;
	if (pData)
	{
		DFITCStockRspQryFreezeFundsDetailField *task_data = new DFITCStockRspQryFreezeFundsDetailField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspStockQryFreezeStockDetail(DFITCStockRspQryFreezeStockDetailField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKQRYFREEZESTOCKDETAIL;
	if (pData)
	{
		DFITCStockRspQryFreezeStockDetailField *task_data = new DFITCStockRspQryFreezeStockDetailField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspStockQryTransferStockDetail(DFITCStockRspQryTransferStockDetailField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKQRYTRANSFERSTOCKDETAIL;
	if (pData)
	{
		DFITCStockRspQryTransferStockDetailField *task_data = new DFITCStockRspQryTransferStockDetailField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspStockQryTransferFundsDetail(DFITCStockRspQryTransferFundsDetailField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKQRYTRANSFERFUNDSDETAIL;
	if (pData)
	{
		DFITCStockRspQryTransferFundsDetailField *task_data = new DFITCStockRspQryTransferFundsDetailField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspStockQryStockInfo(DFITCStockRspQryStockField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKQRYSTOCKINFO;
	if (pData)
	{
		DFITCStockRspQryStockField *task_data = new DFITCStockRspQryStockField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspStockQryStockStaticInfo(DFITCStockRspQryStockStaticField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKQRYSTOCKSTATICINFO;
	if (pData)
	{
		DFITCStockRspQryStockStaticField *task_data = new DFITCStockRspQryStockStaticField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspStockQryTradeTime(DFITCStockRspQryTradeTimeField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKQRYTRADETIME;
	if (pData)
	{
		DFITCStockRspQryTradeTimeField *task_data = new DFITCStockRspQryTradeTimeField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnStockEntrustOrderRtn(DFITCStockEntrustOrderRtnField * pData)
{
	Task task = Task();
	task.task_name = ONSTOCKENTRUSTORDERRTN;
	if (pData)
	{
		DFITCStockEntrustOrderRtnField *task_data = new DFITCStockEntrustOrderRtnField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

    void TdApi::OnStockTradeRtn(DFITCStockTradeRtnField * pData)
{
	Task task = Task();
	task.task_name = ONSTOCKTRADERTN;
	if (pData)
	{
		DFITCStockTradeRtnField *task_data = new DFITCStockTradeRtnField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

    void TdApi::OnStockWithdrawOrderRtn(DFITCStockWithdrawOrderRtnField * pData)
{
	Task task = Task();
	task.task_name = ONSTOCKWITHDRAWORDERRTN;
	if (pData)
	{
		DFITCStockWithdrawOrderRtnField *task_data = new DFITCStockWithdrawOrderRtnField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPUserLogin(DFITCSECRspUserLoginField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSOPUSERLOGIN;
	if (pData)
	{
		DFITCSECRspUserLoginField *task_data = new DFITCSECRspUserLoginField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPUserLogout(DFITCSECRspUserLogoutField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSOPUSERLOGOUT;
	if (pData)
	{
		DFITCSECRspUserLogoutField *task_data = new DFITCSECRspUserLogoutField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPUserPasswordUpdate(DFITCSECRspPasswordUpdateField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSOPUSERPASSWORDUPDATE;
	if (pData)
	{
		DFITCSECRspPasswordUpdateField *task_data = new DFITCSECRspPasswordUpdateField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPEntrustOrder(DFITCSOPRspEntrustOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSOPENTRUSTORDER;
	if (pData)
	{
		DFITCSOPRspEntrustOrderField *task_data = new DFITCSOPRspEntrustOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPQuoteEntrustOrder(DFITCSOPRspQuoteEntrustOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSOPQUOTEENTRUSTORDER;
	if (pData)
	{
		DFITCSOPRspQuoteEntrustOrderField *task_data = new DFITCSOPRspQuoteEntrustOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPGroupSplit(DFITCSOPRspEntrustOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSOPGROUPSPLIT;
	if (pData)
	{
		DFITCSOPRspEntrustOrderField *task_data = new DFITCSOPRspEntrustOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspSOPGroupExectueOrder(DFITCSOPRspGroupExectueOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSOPGROUPEXECTUEORDER;
	if (pData)
	{
		DFITCSOPRspGroupExectueOrderField *task_data = new DFITCSOPRspGroupExectueOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPQryGroupPosition(DFITCSOPRspQryGroupPositionField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSOPQRYGROUPPOSITION;
	if (pData)
	{
		DFITCSOPRspQryGroupPositionField *task_data = new DFITCSOPRspQryGroupPositionField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPLockOUnLockStock(DFITCSOPRspLockOUnLockStockField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPSOPLOCKOUNLOCKSTOCK;
	if (pData)
	{
		DFITCSOPRspLockOUnLockStockField *task_data = new DFITCSOPRspLockOUnLockStockField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPWithdrawOrder(DFITCSECRspWithdrawOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSOPWITHDRAWORDER;
	if (pData)
	{
		DFITCSECRspWithdrawOrderField *task_data = new DFITCSECRspWithdrawOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPQryEntrustOrder(DFITCSOPRspQryEntrustOrderField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSOPQRYENTRUSTORDER;
	if (pData)
	{
		DFITCSOPRspQryEntrustOrderField *task_data = new DFITCSOPRspQryEntrustOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPQrySerialTrade(DFITCSOPRspQrySerialTradeField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSOPQRYSERIALTRADE;
	if (pData)
	{
		DFITCSOPRspQrySerialTradeField *task_data = new DFITCSOPRspQrySerialTradeField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPQryPosition(DFITCSOPRspQryPositionField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSOPQRYPOSITION;
	if (pData)
	{
		DFITCSOPRspQryPositionField *task_data = new DFITCSOPRspQryPositionField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPQryCollateralPosition(DFITCSOPRspQryCollateralPositionField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSOPQRYCOLLATERALPOSITION;
	if (pData)
	{
		DFITCSOPRspQryCollateralPositionField *task_data = new DFITCSOPRspQryCollateralPositionField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPQryCapitalAccountInfo(DFITCSOPRspQryCapitalAccountField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSOPQRYCAPITALACCOUNTINFO;
	if (pData)
	{
		DFITCSOPRspQryCapitalAccountField *task_data = new DFITCSOPRspQryCapitalAccountField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPQryAccountInfo(DFITCSOPRspQryAccountField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSOPQRYACCOUNTINFO;
	if (pData)
	{
		DFITCSOPRspQryAccountField *task_data = new DFITCSOPRspQryAccountField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPQryShareholderInfo(DFITCSOPRspQryShareholderField *pData, DFITCSECRspInfoField *pRspInfo)  
{
	Task task = Task();
	task.task_name = ONRSPSOPQRYSHAREHOLDERINFO;
	if (pData)
	{
		DFITCSOPRspQryShareholderField *task_data = new DFITCSOPRspQryShareholderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPCalcAbleEntrustQty(DFITCSOPRspCalcAbleEntrustQtyField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSOPCALCABLEENTRUSTQTY;
	if (pData)
	{
		DFITCSOPRspCalcAbleEntrustQtyField *task_data = new DFITCSOPRspCalcAbleEntrustQtyField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPQryAbleLockStock(DFITCSOPRspQryAbleLockStockField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPSOPQRYABLELOCKSTOCK;
	if (pData)
	{
		DFITCSOPRspQryAbleLockStockField *task_data = new DFITCSOPRspQryAbleLockStockField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPQryContactInfo(DFITCSOPRspQryContactField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast)  
{
	Task task = Task();
	task.task_name = ONRSPSOPQRYCONTACTINFO;
	if (pData)
	{
		DFITCSOPRspQryContactField *task_data = new DFITCSOPRspQryContactField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspSOPExectueOrder(DFITCSOPRspExectueOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSOPEXECTUEORDER;
	if (pData)
	{
		DFITCSOPRspExectueOrderField *task_data = new DFITCSOPRspExectueOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPQryExecAssiInfo(DFITCSOPRspQryExecAssiInfoField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSOPQRYEXECASSIINFO;
	if (pData)
	{
		DFITCSOPRspQryExecAssiInfoField *task_data = new DFITCSOPRspQryExecAssiInfoField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPQryTradeTime(DFITCSOPRspQryTradeTimeField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSOPQRYTRADETIME;
	if (pData)
	{
		DFITCSOPRspQryTradeTimeField *task_data = new DFITCSOPRspQryTradeTimeField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPQryExchangeInfo(DFITCSOPRspQryExchangeInfoField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSOPQRYEXCHANGEINFO;
	if (pData)
	{
		DFITCSOPRspQryExchangeInfoField *task_data = new DFITCSOPRspQryExchangeInfoField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPQryCommission(DFITCSOPRspQryCommissionField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSOPQRYCOMMISSION;
	if (pData)
	{
		DFITCSOPRspQryCommissionField *task_data = new DFITCSOPRspQryCommissionField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPQryDeposit(DFITCSOPRspQryDepositField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSOPQRYDEPOSIT;
	if (pData)
	{
		DFITCSOPRspQryDepositField *task_data = new DFITCSOPRspQryDepositField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspSOPQryContractObjectInfo(DFITCSOPRspQryContractObjectField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSOPQRYCONTRACTOBJECTINFO;
	if (pData)
	{
		DFITCSOPRspQryContractObjectField *task_data = new DFITCSOPRspQryContractObjectField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnSOPEntrustOrderRtn(DFITCSOPEntrustOrderRtnField * pData)
{
	Task task = Task();
	task.task_name = ONSOPENTRUSTORDERRTN;
	if (pData)
	{
		DFITCSOPEntrustOrderRtnField *task_data = new DFITCSOPEntrustOrderRtnField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

    void TdApi::OnSOPTradeRtn(DFITCSOPTradeRtnField * pData)
{
	Task task = Task();
	task.task_name = ONSOPTRADERTN;
	if (pData)
	{
		DFITCSOPTradeRtnField *task_data = new DFITCSOPTradeRtnField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

    void TdApi::OnSOPWithdrawOrderRtn(DFITCSOPWithdrawOrderRtnField * pData)
{
	Task task = Task();
	task.task_name = ONSOPWITHDRAWORDERRTN;
	if (pData)
	{
		DFITCSOPWithdrawOrderRtnField *task_data = new DFITCSOPWithdrawOrderRtnField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnSOPQuoteEntrustOrderRtn(DFITCSOPQuoteEntrustOrderRtnField * pData)
{
	Task task = Task();
	task.task_name = ONSOPQUOTEENTRUSTORDERRTN;
	if (pData)
	{
		DFITCSOPQuoteEntrustOrderRtnField *task_data = new DFITCSOPQuoteEntrustOrderRtnField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspSOPCapitalTranInOut(DFITCSOPRspCapitalTranInOutField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSOPCAPITALTRANINOUT;
	if (pData)
	{
		DFITCSOPRspCapitalTranInOutField *task_data = new DFITCSOPRspCapitalTranInOutField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspSOPCapitalDistributionRatio(DFITCSOPRspQryCapitalDistributionRatioField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSOPCAPITALDISTRIBUTIONRATIO;
	if (pData)
	{
		DFITCSOPRspQryCapitalDistributionRatioField *task_data = new DFITCSOPRspQryCapitalDistributionRatioField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspSOPFundTransBetweenNodes(DFITCSOPRspFundTransBetweenNodesField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSOPFUNDTRANSBETWEENNODES;
	if (pData)
	{
		DFITCSOPRspFundTransBetweenNodesField *task_data = new DFITCSOPRspFundTransBetweenNodesField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspSOPModCapitalDistributionRatio(DFITCSOPRspModCapitalDistributionRatioField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSOPMODCAPITALDISTRIBUTIONRATIO;
	if (pData)
	{
		DFITCSOPRspModCapitalDistributionRatioField *task_data = new DFITCSOPRspModCapitalDistributionRatioField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspFASLUserLogin(DFITCSECRspUserLoginField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPFASLUSERLOGIN;
	if (pData)
	{
		DFITCSECRspUserLoginField *task_data = new DFITCSECRspUserLoginField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspFASLUserLogout(DFITCSECRspUserLogoutField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPFASLUSERLOGOUT;
	if (pData)
	{
		DFITCSECRspUserLogoutField *task_data = new DFITCSECRspUserLogoutField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspFASLQryAbleFinInfo(DFITCFASLRspAbleFinInfoField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYABLEFININFO;
	if (pData)
	{
		DFITCFASLRspAbleFinInfoField *task_data = new DFITCFASLRspAbleFinInfoField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspFASLQryAbleSloInfo(DFITCFASLRspAbleSloInfoField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYABLESLOINFO;
	if (pData)
	{
		DFITCFASLRspAbleSloInfoField *task_data = new DFITCFASLRspAbleSloInfoField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspFASLTransferCollateral(DFITCFASLRspTransferCollateralField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPFASLTRANSFERCOLLATERAL;
	if (pData)
	{
		DFITCFASLRspTransferCollateralField *task_data = new DFITCFASLRspTransferCollateralField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspFASLDirectRepayment(DFITCFASLRspDirectRepaymentField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPFASLDIRECTREPAYMENT;
	if (pData)
	{
		DFITCFASLRspDirectRepaymentField *task_data = new DFITCFASLRspDirectRepaymentField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspFASLRepayStockTransfer(DFITCFASLRspRepayStockTransferField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPFASLREPAYSTOCKTRANSFER;
	if (pData)
	{
		DFITCFASLRspRepayStockTransferField *task_data = new DFITCFASLRspRepayStockTransferField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspFASLEntrustCrdtOrder(DFITCFASLRspEntrustCrdtOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPFASLENTRUSTCRDTORDER;
	if (pData)
	{
		DFITCFASLRspEntrustCrdtOrderField *task_data = new DFITCFASLRspEntrustCrdtOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspFASLEntrustOrder(DFITCFASLRspEntrustOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPFASLENTRUSTORDER;
	if (pData)
	{
		DFITCFASLRspEntrustOrderField *task_data = new DFITCFASLRspEntrustOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspFASLCalcAbleEntrustCrdtQty(DFITCFASLRspCalcAbleEntrustCrdtQtyField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPFASLCALCABLEENTRUSTCRDTQTY;
	if (pData)
	{
		DFITCFASLRspCalcAbleEntrustCrdtQtyField *task_data = new DFITCFASLRspCalcAbleEntrustCrdtQtyField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspFASLQryCrdtFunds(DFITCFASLRspQryCrdtFundsField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYCRDTFUNDS;
	if (pData)
	{
		DFITCFASLRspQryCrdtFundsField *task_data = new DFITCFASLRspQryCrdtFundsField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspFASLQryCrdtContract(DFITCFASLRspQryCrdtContractField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLat) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYCRDTCONTRACT;
	if (pData)
	{
		DFITCFASLRspQryCrdtContractField *task_data = new DFITCFASLRspQryCrdtContractField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLat;
	this->task_queue.push(task);
};

    void TdApi::OnRspFASLQryCrdtConChangeInfo(DFITCFASLRspQryCrdtConChangeInfoField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYCRDTCONCHANGEINFO;
	if (pData)
	{
		DFITCFASLRspQryCrdtConChangeInfoField *task_data = new DFITCFASLRspQryCrdtConChangeInfoField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspFASLTransferFunds(DFITCFASLRspTransferFundsField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPFASLTRANSFERFUNDS;
	if (pData)
	{
		DFITCFASLRspTransferFundsField *task_data = new DFITCFASLRspTransferFundsField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspFASLTransferStock(DFITCFASLRspTransferStockField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPFASLTRANSFERSTOCK;
	if (pData)
	{
		DFITCFASLRspTransferStockField *task_data = new DFITCFASLRspTransferStockField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspFASLQryAccountInfo(DFITCFASLRspQryAccountField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYACCOUNTINFO;
	if (pData)
	{
		DFITCFASLRspQryAccountField *task_data = new DFITCFASLRspQryAccountField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspFASLQryCapitalAccountInfo(DFITCFASLRspQryCapitalAccountField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYCAPITALACCOUNTINFO;
	if (pData)
	{
		DFITCFASLRspQryCapitalAccountField *task_data = new DFITCFASLRspQryCapitalAccountField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspFASLQryShareholderInfo(DFITCFASLRspQryShareholderField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYSHAREHOLDERINFO;
	if (pData)
	{
		DFITCFASLRspQryShareholderField *task_data = new DFITCFASLRspQryShareholderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspFASLQryPosition(DFITCFASLRspQryPositionField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYPOSITION;
	if (pData)
	{
		DFITCFASLRspQryPositionField *task_data = new DFITCFASLRspQryPositionField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspFASLQryEntrustOrder(DFITCFASLRspQryEntrustOrderField * pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYENTRUSTORDER;
	if (pData)
	{
		DFITCFASLRspQryEntrustOrderField *task_data = new DFITCFASLRspQryEntrustOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspFASLQrySerialTrade(DFITCFASLRspQrySerialTradeField * pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYSERIALTRADE;
	if (pData)
	{
		DFITCFASLRspQrySerialTradeField *task_data = new DFITCFASLRspQrySerialTradeField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspFASLQryRealTimeTrade(DFITCFASLRspQryRealTimeTradeField * pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYREALTIMETRADE;
	if (pData)
	{
		DFITCFASLRspQryRealTimeTradeField *task_data = new DFITCFASLRspQryRealTimeTradeField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspFASLQryFreezeFundsDetail(DFITCFASLRspQryFreezeFundsDetailField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYFREEZEFUNDSDETAIL;
	if (pData)
	{
		DFITCFASLRspQryFreezeFundsDetailField *task_data = new DFITCFASLRspQryFreezeFundsDetailField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspFASLQryFreezeStockDetail(DFITCFASLRspQryFreezeStockDetailField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYFREEZESTOCKDETAIL;
	if (pData)
	{
		DFITCFASLRspQryFreezeStockDetailField *task_data = new DFITCFASLRspQryFreezeStockDetailField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspFASLQryTransferFundsDetail(DFITCFASLRspQryTransferFundsDetailField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYTRANSFERFUNDSDETAIL;
	if (pData)
	{
		DFITCFASLRspQryTransferFundsDetailField *task_data = new DFITCFASLRspQryTransferFundsDetailField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspFASLWithdrawOrder(DFITCFASLRspWithdrawOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPFASLWITHDRAWORDER;
	if (pData)
	{
		DFITCFASLRspWithdrawOrderField *task_data = new DFITCFASLRspWithdrawOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspFASLQrySystemTime(DFITCFASLRspQryTradeTimeField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYSYSTEMTIME;
	if (pData)
	{
		DFITCFASLRspQryTradeTimeField *task_data = new DFITCFASLRspQryTradeTimeField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspFASLQryTransferredContract(DFITCFASLRspQryTransferredContractField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYTRANSFERREDCONTRACT;
	if (pData)
	{
		DFITCFASLRspQryTransferredContractField *task_data = new DFITCFASLRspQryTransferredContractField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspFASLDesirableFundsOut(DFITCFASLRspDesirableFundsOutField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPFASLDESIRABLEFUNDSOUT;
	if (pData)
	{
		DFITCFASLRspDesirableFundsOutField *task_data = new DFITCFASLRspDesirableFundsOutField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

    void TdApi::OnRspFASLQryGuaranteedContract(DFITCFASLRspQryGuaranteedContractField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYGUARANTEEDCONTRACT;
	if (pData)
	{
		DFITCFASLRspQryGuaranteedContractField *task_data = new DFITCFASLRspQryGuaranteedContractField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

    void TdApi::OnRspFASLQryUnderlyingContract(DFITCFASLRspQryUnderlyingContractField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYUNDERLYINGCONTRACT;
	if (pData)
	{
		DFITCFASLRspQryUnderlyingContractField *task_data = new DFITCFASLRspQryUnderlyingContractField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspFASLQryCentreFundAvlInfo(DFITCFASLRspQryCentreFundAvlField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYCENTREFUNDAVLINFO;
	if (pData)
	{
		DFITCFASLRspQryCentreFundAvlField *task_data = new DFITCFASLRspQryCentreFundAvlField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspFASLQryPlacingInterestsInfo(DFITCFASLRspQryPlacingInterestsField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPFASLQRYPLACINGINTERESTSINFO;
	if (pData)
	{
		DFITCFASLRspQryPlacingInterestsField *task_data = new DFITCFASLRspQryPlacingInterestsField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspFASLUserPasswordUpdate(DFITCSECRspPasswordUpdateField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPFASLUSERPASSWORDUPDATE;
	if (pData)
	{
		DFITCSECRspPasswordUpdateField *task_data = new DFITCSECRspPasswordUpdateField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnFASLEntrustOrderRtn(DFITCFaslEntrustOrderRtnField *pData)
{
	Task task = Task();
	task.task_name = ONFASLENTRUSTORDERRTN;
	if (pData)
	{
		DFITCFaslEntrustOrderRtnField *task_data = new DFITCFaslEntrustOrderRtnField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnFASLTradeRtn(DFITCFaslTradeRtnField *pData)
{
	Task task = Task();
	task.task_name = ONFASLTRADERTN;
	if (pData)
	{
		DFITCFaslTradeRtnField *task_data = new DFITCFaslTradeRtnField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

    void TdApi::OnFASLWithdrawOrderRtn(DFITCFaslWithdrawOrderRtnField *pData)
{
	Task task = Task();
	task.task_name = ONFASLWITHDRAWORDERRTN;
	if (pData)
	{
		DFITCFaslWithdrawOrderRtnField *task_data = new DFITCFaslWithdrawOrderRtnField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnFASLLiabilitiesRtn(DFITCFaslLiabilitiesRtnField *pData)
{
	Task task = Task();
	task.task_name = ONFASLLIABILITIESRTN;
	if (pData)
	{
		DFITCFaslLiabilitiesRtnField *task_data = new DFITCFaslLiabilitiesRtnField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspStockETFEntrustOrder(DFITCStockRspETFEntrustOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKETFENTRUSTORDER;
	if (pData)
	{
		DFITCStockRspETFEntrustOrderField *task_data = new DFITCStockRspETFEntrustOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspStockETFBasketOrder(DFITCStockRspETFBasketOrderField *pData, DFITCSECRspInfoField *pRspInfo, bool bIsLast) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKETFBASKETORDER;
	if (pData)
	{
		DFITCStockRspETFBasketOrderField *task_data = new DFITCStockRspETFBasketOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	task.task_last = bIsLast;
	this->task_queue.push(task);
};

void TdApi::OnRspStockBondRepurchaseOrder(DFITCStockRspBondRepurchaseOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKBONDREPURCHASEORDER;
	if (pData)
	{
		DFITCStockRspBondRepurchaseOrderField *task_data = new DFITCStockRspBondRepurchaseOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspStockBondInOutStockOrder(DFITCStockRspBondInOutStockOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKBONDINOUTSTOCKORDER;
	if (pData)
	{
		DFITCStockRspBondInOutStockOrderField *task_data = new DFITCStockRspBondInOutStockOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspStockIssueBusinessOrder(DFITCStockRspIssueBusinessOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKISSUEBUSINESSORDER;
	if (pData)
	{
		DFITCStockRspIssueBusinessOrderField *task_data = new DFITCStockRspIssueBusinessOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspStockLOFEntrustOrder(DFITCStockRspLOFEntrustOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKLOFENTRUSTORDER;
	if (pData)
	{
		DFITCStockRspLOFEntrustOrderField *task_data = new DFITCStockRspLOFEntrustOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspStockAfterHoursPriceOrder(DFITCStockRspAfterHoursPriceOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKAFTERHOURSPRICEORDER;
	if (pData)
	{
		DFITCStockRspAfterHoursPriceOrderField *task_data = new DFITCStockRspAfterHoursPriceOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspStockNonTradingBusinessOrder(DFITCStockRspNonTradingBusinessOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKNONTRADINGBUSINESSORDER;
	if (pData)
	{
		DFITCStockRspNonTradingBusinessOrderField *task_data = new DFITCStockRspNonTradingBusinessOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspStockSHMutualFundOrder(DFITCStockRspSHMutualFundOrderField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKSHMUTUALFUNDORDER;
	if (pData)
	{
		DFITCStockRspSHMutualFundOrderField *task_data = new DFITCStockRspSHMutualFundOrderField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspStockCalcAblePurchaseETFBasketQty(DFITCStockRspCalcAblePurchaseETFBasketQtyField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKCALCABLEPURCHASEETFBASKETQTY;
	if (pData)
	{
		DFITCStockRspCalcAblePurchaseETFBasketQtyField *task_data = new DFITCStockRspCalcAblePurchaseETFBasketQtyField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspStockCalcAbleBondRepurchaseQty(DFITCStockRspCalcAbleBondRepurchaseQtyField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKCALCABLEBONDREPURCHASEQTY;
	if (pData)
	{
		DFITCStockRspCalcAbleBondRepurchaseQtyField *task_data = new DFITCStockRspCalcAbleBondRepurchaseQtyField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspStockCalcAbleIssueBusinessQty(DFITCStockRspCalcAbleIssueBusinessQtyField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKCALCABLEISSUEBUSINESSQTY;
	if (pData)
	{
		DFITCStockRspCalcAbleIssueBusinessQtyField *task_data = new DFITCStockRspCalcAbleIssueBusinessQtyField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspStockCalcAblePurchaseLOFQty(DFITCStockRspCalcAblePurchaseLOFQtyField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKCALCABLEPURCHASELOFQTY;
	if (pData)
	{
		DFITCStockRspCalcAblePurchaseLOFQtyField *task_data = new DFITCStockRspCalcAblePurchaseLOFQtyField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspStockCalcAbleAfterHoursPriceQty(DFITCStockRspCalcAbleAfterHoursPriceQtyField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKCALCABLEAFTERHOURSPRICEQTY;
	if (pData)
	{
		DFITCStockRspCalcAbleAfterHoursPriceQtyField *task_data = new DFITCStockRspCalcAbleAfterHoursPriceQtyField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspStockCalcAbleNonTradingBusinessQty(DFITCStockRspCalcAbleNonTradingBusinessQtyField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKCALCABLENONTRADINGBUSINESSQTY;
	if (pData)
	{
		DFITCStockRspCalcAbleNonTradingBusinessQtyField *task_data = new DFITCStockRspCalcAbleNonTradingBusinessQtyField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

void TdApi::OnRspStockCalcAbleSHMutualFundQty(DFITCStockRspCalcAbleSHMutualFundQtyField *pData, DFITCSECRspInfoField *pRspInfo) 
{
	Task task = Task();
	task.task_name = ONRSPSTOCKCALCABLESHMUTUALFUNDQTY;
	if (pData)
	{
		DFITCStockRspCalcAbleSHMutualFundQtyField *task_data = new DFITCStockRspCalcAbleSHMutualFundQtyField();
		*task_data = *pData;
		task.task_data = task_data;
	}
	if (pRspInfo)
	{
		DFITCSECRspInfoField *task_error = new DFITCSECRspInfoField();
		*task_error = *pRspInfo;
		task.task_error = task_error;
	}
	this->task_queue.push(task);
};

