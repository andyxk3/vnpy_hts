/**
 * ��Ȩ����(C)2012-2016, ������������ɷ����޹�˾
 * �ļ����ƣ�DFITCSECApiStruct.h
 * �ļ�˵��������ӿ���������ݽӿ�
 * ��ǰ�汾��1.6
 * ���ߣ�רҵ���׽ӿڿ�����
 * �������ڣ�2019��11��
 */
#ifndef DFITCSECAPISTRUCT_H_
#define DFITCSECAPISTRUCT_H_


#include "DFITCSECApiDataType.h"

#ifdef WIN32
    #ifdef DFITCSECAPI_EXPORTS
        #define APISTRUCT __declspec(dllexport)
    #else
        #define APISTRUCT __declspec(dllimport)
    #endif//DFITCAPI_EXPORTS
#else
#define APISTRUCT
#endif//WIN32

//�ش���ʽ
enum RESUME_TYPE
{
    TERT_QUICK = 0,
    TERT_RESUME,
    TERT_RESTART
};

//ERR-������Ϣ
struct APISTRUCT DFITCSECRspInfoField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECSessionIDType                sessionID;                //�Ự��ʶ
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECErrorIDType                  errorID;                  //����ID
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECMessageType                  errorMsg;                 //������Ϣ
};

//ERR-��Ϣ֪ͨ
struct APISTRUCT DFITCSECRspNoticeField
{
    DFITCSECMessageType                  noticeMsg;                 //֪ͨ
};

//SEC-������֤��Ϣ
struct APISTRUCT DFITCSECAuthenticationField
{
	DFITCSECAccountIDType                commUser;                 //ͨѶ�û���(Y)
	DFITCSECPasswordType                 commPwd;                  //ͨѶ����(Y)
	DFITCSECAppName                      appName;                  //�������
	DFITCSECAppVer                       appVer;                   //����汾
	DFITCSECCertFile                     certFile;                 //�ͻ���֤���ļ�
	DFITCSECPasswordType                 certPwd;                  //�ͻ���֤������
	DFITCSECCAFile						 CAFile;                   //��֤��
};

//SEC-��¼����
struct APISTRUCT DFITCSECReqUserLoginField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECPasswordType                 password;                 //����(Y)
    DFITCSECMDCompressFalgType           compressflag;             //����ѹ����־(N)(ֻ�е�¼�����˻���ʱ����ֶ���Ч)
    DFITCSECAuthenticCodeType            authenticCode;            //��֤��
    DFITCSECAppID                        appID;
    DFITCSECCollectInterfaceType         collectInterType;         //����ʽ��ܲɼ��ӿ�����
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)(һ�������û�ר��)
};

//SEC-��¼��Ӧ
struct APISTRUCT DFITCSECRspUserLoginField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSessionIDType                sessionID;                //�Ự���
    DFITCSECFrontIDType                  frontID;                  //ǰ�ñ��
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECTimeType                     loginTime;                //��¼ʱ��
    DFITCSECDateType                     tradingDay;               //������
    DFITCSECErrorIDType                  result;                   //���
    DFITCSECMessageType                  rtnMsg;                   //������Ϣ
};

//SEC-�ǳ�����
struct APISTRUCT DFITCSECReqUserLogoutField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
};

//SEC-�ǳ���Ӧ 
struct APISTRUCT DFITCSECRspUserLogoutField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECErrorIDType                  result;                   //���
    DFITCSECMessageType                  rtnMsg;                   //������Ϣ
};

//SEC-�����û���������
struct APISTRUCT DFITCSECReqPasswordUpdateField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECPasswordType                 oldPassword;              //������(Y)
    DFITCSECPasswordType                 newPassword;              //������(Y)
    DFITCSECPasswordTypeType             passwordType;             //��������(Y)
};

//SEC-�����û�������Ӧ
struct APISTRUCT DFITCSECRspPasswordUpdateField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECPasswordTypeType             passwordType;             //��������
    DFITCSECErrorIDType                  result;                   //���½��
    DFITCSECMessageType                  rtnMsg;                   //���·�����Ϣ
};

//SEC-���������˻���������
struct APISTRUCT DFITCSECReqMDPasswordUpdateField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECPasswordType                 oldPassword;              //������(Y)
    DFITCSECPasswordType                 newPassword;              //������(Y)
};

//SEC-���������˻�������Ӧ
struct APISTRUCT DFITCSECRspMDPasswordUpdateField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECErrorIDType                  result;                   //���½��
    DFITCSECMessageType                  rtnMsg;                   //���·�����Ϣ
};

//SEC-��������
struct APISTRUCT DFITCSECReqWithdrawOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�(N)
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(N)(��̨ί�кźͱ���ί�кŶ�ѡһ)
    DFITCSECSessionIDType                sessionID;                //�Ự���(N)
};

//SEC-������Ӧ
struct APISTRUCT DFITCSECRspWithdrawOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECTimeType                     entrustTime;              //ί��ʱ��(��Ʊû������ֶΣ���Ȩ��)
    DFITCSECMessageType                  cancelMsg;                //����������Ϣ
};

//STOCK-ί������
struct APISTRUCT DFITCStockReqEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECPriceType                    entrustPrice;             //ί�м۸�(N)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
    DFITCSECQuantityType                 entrustQty;               //ί������(Y)
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(Y)
    DFITCSECOrderTypeType                orderType;                //��������(Y)
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
    DFITCSECSeatIDType                   eachSeatID;               //�Է�ϯλ��(N)
    DFITCSECHKEntrustLimitType           hkEntrustLimit;           //�۹ɽ�������(�۹ɽ��ף�Y)
    DFITCSECHKOrderTypeType              hkOrderType;              //�۹ɶ�������(�۹ɽ��ף�Y)
};

//STOCK-ί����Ӧ
struct APISTRUCT DFITCStockRspEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
    DFITCSECMessageType                  entrustMsg;               //ί�з�����Ϣ
};

//STOCK-ί�в�ѯ����
struct APISTRUCT DFITCStockReqQryEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSpdOrderIDType               spdOrderID;               //ί�к�(N)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(N)
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(N)
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
    DFITCSECEntrustQryFlagType           entrustQryFlag;           //��ѯ��־(N)
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־(N)
    DFITCSECIncQryIndexType              incQryIndex;              //������ѯ����ֵ(N)(���ܳ���int���ֵ)
};

//STOCK-ί�в�ѯ��Ӧ
struct APISTRUCT DFITCStockRspQryEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECShareholderIDType            offerShareholderID;       //���̹ɶ���
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECFundsType                    turnover;                 //�ɽ����
    DFITCSECPriceType                    tradePrice;               //�ɽ��۸�
    DFITCSECTimeType                     tradeTime;                //�ɽ�ʱ��
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECFundsType                    clearFunds;               //�����ʽ�
    DFITCSECEntrustTypeType              entrustType;              //ί�з�ʽ
    DFITCSECSpdOrderIDType               spdOrderID;               //ί�к�
    DFITCSECPriceType                    entrustPrice;             //ί�м۸�
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECQuantityType                 entrustQty;               //ί������
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECSecurityTypeType             securityType;             //֤ȯ���
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
    DFITCSECTimeType                     entrustTime;              //ί��ʱ��
    DFITCSECTimeType                     declareTime;              //�걨ʱ��
    DFITCSECDeclareResultType            declareResult;            //�걨���
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECFundsType                    freezeFunds;              //�����ʽ�
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECMessageType                  noteMsg;                  //���˵��
    DFITCSECQuantityType                 withdrawQty;              //��������
    DFITCSECDeclareOrderIDType           declareOrderID;           //�걨ί�к�
    DFITCSECOrderTypeType                orderType;                //��������
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�
    DFITCSECSerialIDType                 freezeFundsSerialID;      //�ʽ𶳽���ˮ��
    DFITCSECSerialIDType                 freezeStockSerialID;      //֤ȯ������ˮ��
    DFITCSECDateType                     declareDate;              //�걨����
    DFITCSECSerialIDType                 declareSerialID;          //�걨��¼��
    DFITCSECDateType                     entrustDate;              //ί������
    DFITCSECIncQryIndexType              incQryIndex;              //������ѯ����ֵ
    DFITCSECIPAddressType                ipAddr;                   //IP��ַ
    DFITCSECMacAddressType               macAddr;                  //MAC��ַ
};

//STOCK-ʵʱ�ɽ���ѯ����
struct APISTRUCT DFITCStockReqQryRealTimeTradeField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(N)
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(N)
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�(N)
    DFITCSECTradeQryFlagType             queryFlag;                //��ѯ��־(N)
};

//STOCK-ʵʱ�ɽ���ѯ��Ӧ
struct APISTRUCT DFITCStockRspQryRealTimeTradeField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECDeclareOrderIDType           declareOrderID;           //�걨ί�к�
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
    DFITCSECQuantityType                 entrustQty;               //ί������
    DFITCSECPriceType                    entrustPrice;             //ί�м۸�
    DFITCSECQuantityType                 withdrawQty;              //��������
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
    DFITCSECFundsType                    turnover;                 //�ɽ����
    DFITCSECPriceType                    tradePrice;               //�ɽ��۸�
    DFITCSECTimeType                     tradeTime;                //�ɽ�ʱ��
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECFundsType                    clearFunds;               //�����ʽ�
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�
    DFITCSECOrderTypeType                orderType;                //��������
};

//STOCK-�ֱʳɽ���ѯ����
struct APISTRUCT DFITCStockReqQrySerialTradeField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�(N)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(N)
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(N)
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
    DFITCSECTradeQryFlagType             tradeQryFlag;             //��ѯ��־(N)
    DFITCSECIncQryIndexType              incQryIndex;              //������ѯ����ֵ(N)
};

//STOCK-�ֱʳɽ���ѯ��Ӧ
struct APISTRUCT DFITCStockRspQrySerialTradeField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECTradeIDType                  tradeID;                  //�ɽ����
    DFITCSECFundsType                    turnover;                 //�ɽ����
    DFITCSECPriceType                    tradePrice;               //�ɽ��۸�
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECFundsType                    clearFunds;               //�����ʽ�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECSecurityTypeType             securityType;             //֤�����
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECFundsType                    commission;               //Ӷ��
    DFITCSECSerialIDType                 rtnSerialID;              //�ر����
    DFITCSECFundsType                    interestQuote;            //��Ϣ����
    DFITCSECDeclareOrderIDType           declareOrderID;           //�걨ί�к�
    DFITCSECIncQryIndexType              incQryIndex;              //������ѯ����ֵ
    DFITCSECFundsType                    interest;                 //��Ϣ
    DFITCSECTimeType                     tradeTime;                //�ɽ�ʱ��
};

//STOCK-�ֲֲ�ѯ����
struct APISTRUCT DFITCStockReqQryPositionField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSecurityIDType               securityID;               //֤������(N)
    DFITCSECPositionQryFlagType          posiQryFlag;              //��ѯ��־(N)
};

//STOCK-�ֲֲ�ѯ��Ӧ
struct APISTRUCT DFITCStockRspQryPositionField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECFundsType                    sellTurnover;             //���������ɽ����
    DFITCSECQuantityType                 sellTradeQty;             //���������ɽ�����
    DFITCSECQuantityType                 sellEntrustQty;           //��������ί������
    DFITCSECFundsType                    buyTurnover;              //��������ɽ����
    DFITCSECQuantityType                 buyTradeQty;              //��������ɽ�����
    DFITCSECQuantityType                 buyEntrustQty;            //��������ί������
    DFITCSECQuantityType                 nonCirculateQty;          //����ͨ����
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECExchangeIDType               exchangeID;               //������
    DFITCSECDateType                     openDate;                 //��������
    DFITCSECQuantityType                 ableSellQty;              //����������
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECSecurityTypeType             securityType;             //֤ȯ���
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
    DFITCSECQuantityType                 securityQty;              //֤ȯ����
    DFITCSECQuantityType                 position;                 //��ֲ���
    DFITCSECQuantityType                 unSettleQty;              //δ��������
    DFITCSECDateType                     changeDate;               //�䶯����
    DFITCSECQuantityType                 ablePurchaseQty;          //���깺����
    DFITCSECQuantityType                 ableRedemptionQty;        //���������
    DFITCSECQuantityType                 freezeQty;                //��������
    DFITCSECQuantityType                 offsetSQty;               //������������
    DFITCSECQuantityType                 offsetBQty;               //�����������
    DFITCSECQuantityType                 purchaseTradeQty;         //�깺�ɽ�����
    DFITCSECQuantityType                 redemptionTradeQty;       //��سɽ�����
    DFITCSECTradeUnitType                tradeUnit;                //���׵�λ(N)
    DFITCSECQuantityType                 totalSellQty;             //�ۼ���������(N)
    DFITCSECQuantityType                 totalBuyQty;              //�ۼ���������(N)
    DFITCSECQuantityType                 rationedSharesQty;        //�������(N)
    DFITCSECQuantityType                 purchaseQty;              //�͹�����(N)
    DFITCSECFundsType                    dilutedFloatProfitLoss;   //̯������ӯ��(N)
    DFITCSECPriceType                    dilutedBreakevenPrice;    //̯��������(N)
    DFITCSECPriceType                    dilutedCost;              //̯���ɱ���(N)
    DFITCSECPriceType                    avgPositionPrice;         //�ֲ־���(N)
    DFITCSECFundsType                    floatProfitLoss;          //����ӯ��(N)
    DFITCSECFundsType                    dividend;                 //�������(N)
    DFITCSECFundsType                    totalFloatProfitLoss;     //�ۼƸ���ӯ��(N)
    DFITCSECFundsType                    sellAmount;               //�������(N)
    DFITCSECFundsType                    buyAmount;                //������(N)
    DFITCSECPriceType                    buyAvgPrice;              //�������(N)
    DFITCSECFundsType                    rationedSharesAmount;     //��ɽ��(N)
    DFITCSECFundsType                    latestMarket;             //������ֵ(N)
    DFITCSECPriceType                    breakevenPrice;           //������(N)
    DFITCSECPriceType                    latestPrice;              //���¼�(N)
    DFITCSECFundsType                    nonCirculateMarket;       //����ͨ��ֵ(N)
    DFITCSECFundsType                    interestQuote;            //��Ϣ����(N)
    DFITCSECPriceType                    preClosePrice;            //�����̼�(N)(Ԥ��)
};

//STOCK-�ͻ��ʽ��ѯ����
struct APISTRUCT DFITCStockReqQryCapitalAccountField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECFundsQryFlagType             FundsQryFlag;             //��ѯ��־(N)
};

//STOCK-�ͻ��ʽ��ѯ��Ӧ
struct APISTRUCT DFITCStockRspQryCapitalAccountField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECFundsType                    availableFunds;           //�����ʽ�
    DFITCSECFundsType                    t2AvailableFunds;         //T+2�����ʽ�
    DFITCSECFundsType                    anticipatedInterest;      //Ԥ����Ϣ
    DFITCSECFundsType                    accountBalance;           //�˻����
    DFITCSECAccountStatusType            accountStatus;            //�ʻ�״̬
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECFundsType                    freezeFunds;              //�����ʽ�
    DFITCSECFundsType                    t2FreezeFunds;            //T+2�����ʽ�
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSECFundsType                    totalFunds;               //���ʽ�(��ѯ��־Ϊ1ʱ�᷵��ֵ
    DFITCSECFundsType                    totalMarket;              //����ֵ(��ѯ��־Ϊ1ʱ�᷵��ֵ)
};

//STOCK-�ͻ���Ϣ��ѯ����
struct APISTRUCT  DFITCStockReqQryAccountField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
};

//STOCK-�ͻ���Ϣ��ѯ��Ӧ
struct APISTRUCT  DFITCStockRspQryAccountField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECPhoneIDType                  tel;                      //�绰
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECAccountNameType              accountName;              //�ͻ�����
    DFITCSECAccountIdentityIDType        accountIdentityID;        //֤�����
    DFITCSECAccountIdentityTypeType      accountIdentityType;      //֤������
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSBranchTypeType                 branchType;               //������־
    DFITCSECPhoneIDType                  mobile;                   //�ƶ��绰
    DFITCSECEntrustTypeType              entrustType;              //ί�з�ʽ
    DFITCSECAccountStatusType            accountStatus;            //�ͻ�״̬
    DFITCSECPasswdSyncFlagType           pwdSynFlag;               //����ͬ����־
};

//STOCK-�ɶ���Ϣ��ѯ����
struct APISTRUCT  DFITCStockReqQryShareholderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
};

//STOCK-�ɶ���Ϣ��ѯ��Ӧ
struct APISTRUCT  DFITCStockRspQryShareholderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                account;                  //�ͻ���
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECShareholderSpecPropType      shareholderSpecProp;      //�ɶ�ָ������
    DFITCSECTradePermissionsType         tradePermissions;         //����Ȩ��
    DFITCSECExchangeIDType               exchangeID;               //������
    DFITCSECShareholderStatusType        shareholderStatus;        //�ɶ�״̬
    DFITCSECMainAccountFlagType          mainAccountFlag;          //���˻���־
    DFITCSECShareholderCtlPropType       shareholderCtlProp;       //�ɶ���������
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSECShareholderTypeType          shareholderType;          //�ɶ����
};

//STOCK-�ʽ��ת����
struct APISTRUCT  DFITCStockReqTransferFundsField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECCurrencyType                 currency;                 //����(Y)
    DFITCSECMessageType                  summaryMsg;               //ժҪ(N)
    DFITCSECFundsType                    operateFunds;             //�������(Y)
    DFITCSECFundsTransferFlagType        fundsTransFlag;           //�ʽ��ת��־(Y)
};

//STOCK-�ʽ��ת��Ӧ
struct APISTRUCT  DFITCStockRspTransferFundsField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSerialIDType                 serialID;                 //��ˮ��
    DFITCSECFundsType                    accountBanlance;          //�˻����
    DFITCSECFundsType                    availableFunds;           //�����ʽ�
    DFITCSECFundsType                    t2AvailableFunds;         //T+2�����ʽ�
    DFITCSECFundsTransferFlagType        fundsTransFlag;           //�ʽ��ת��־
};

//STOCK-����ί������
struct APISTRUCT DFITCStockReqEntrustBatchOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECQuantityType                 entrustCount;             //ί������(Y)
    DFITCSECEntrustBatchOrderDetailType  entrustDetail;            //ί����ϸ��Ϣ(Y)
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
};

//STOCK-����ί����Ӧ
struct APISTRUCT DFITCStockRspEntrustBatchOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECOrderRangeID                 orderRangeID;             //ί�кŷ�Χ
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�
    DFITCSECQuantityType                 sucEntrustCount;          //�ɹ�ί�б���
};

//STOCK-������������
struct APISTRUCT DFITCStockReqWithdrawBatchOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECOrderIDRangeType             orderRangeID;             //ί�кŷ�Χ(Y)
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
};

//STOCK-����������Ӧ
struct APISTRUCT DFITCStockRspWithdrawBatchOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECBatchDeclareResultType       result;                   //�������
};

//STOCK-�����ί����������
struct APISTRUCT DFITCStockReqCalcAbleEntrustQtyField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECPriceType                    entrustPrice;             //ί�м۸�(N)(�޼۶�������������ֵ)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(N)
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(Y)
    DFITCSECOrderTypeType                orderType;                //��������(Y)
};

//STOCK-�����ί��������Ӧ
struct APISTRUCT DFITCStockRspCalcAbleEntrustQtyField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECQuantityType                 ableEntrustQty;           //��ί������
};

//STOCK-�����������ETF��������
struct APISTRUCT DFITCStockReqCalcAblePurchaseETFQtyField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
	DFITCSECOrderTypeType                orderType;                //��������(Y)
	DFITCSECPriceType                    entrustPrice;             //ί�м۸�(Y)
};

//STOCK-�����������ETF������Ӧ
struct APISTRUCT DFITCStockRspCalcAblePurchaseETFQtyField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECQuantityType                 ablePurchaseETFQty;       //��ί������
};

//STOCK-�ʽ𶳽���ϸ��ѯ����
struct APISTRUCT DFITCStockReqQryFreezeFundsDetailField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECCurrencyType                 currency;                 //����(N)
    DFITCSECFundsFreezeTypeType          fundsFreezeType;          //�������(N)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSerialIDType                 serialID;                 //��ˮ��(N)
};

//STOCK-�ʽ𶳽���ϸ��ѯ��Ӧ
struct APISTRUCT DFITCStockRspQryFreezeFundsDetailField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECFundsFreezeTypeType          fundsFreezeType;          //�������
    DFITCSECAccountNameType              accountName;              //�ͻ�����
    DFITCSECMessageType                  summaryMsg;               //ժҪ
    DFITCSECSerialIDType                 serialID;                 //��ˮ��
    DFITCSECFundsType                    operatorFunds;            //�������
    DFITCSECTimeType                     operatorTime;             //����ʱ��
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSECDateType                     operatorDate;             //��������
};

//STOCK-֤ȯ������ϸ��ѯ����
struct APISTRUCT DFITCStockReqQryFreezeStockDetailField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECStockFreezeTypeType          stockFreezeType;          //�������(N)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(N)
    DFITCSECSerialIDType                 serialID;                 //��ˮ��(N)
};

//STOCK-֤ȯ������ϸ��ѯ��Ӧ
struct APISTRUCT DFITCStockRspQryFreezeStockDetailField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECStockFreezeTypeType          stockFreezeType;          //�������
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECAccountNameType              accountName;              //�ͻ�����
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECSecurityTypeType             securityType;             //֤ȯ���
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
    DFITCSECMessageType                  summaryMsg;               //ժҪ
    DFITCSECSerialIDType                 serialID;                 //��ˮ��
    DFITCSECTimeType                     operatorTime;             //����ʱ��
    DFITCSECBranchIDType                 branchID;                 //Ӫҵ��
    DFITCSECDateType                     operatorDate;             //��������
    DFITCSECQuantityType                 operatorQty;              //��������
};

//STOCK-��ѯ�ʽ������ϸ����
struct APISTRUCT DFITCStockReqQryTransferFundsDetailField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECCurrencyType                 currency;                 //����(N)
    DFITCSECTransFundsFreezeTypeType     fundsFreezeType;          //�������(N)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSerialIDType                 serialID;                 //��ˮ��(N)
};

//STOCK-�ʽ������ϸ��ѯ��Ӧ
struct APISTRUCT DFITCStockRspQryTransferFundsDetailField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECTransFundsFreezeTypeType     fundsFreezeType;          //�������
    DFITCSECAccountNameType              accountName;              //�ͻ�����
    DFITCSECMessageType                  summaryMsg;               //ժҪ
    DFITCSECSerialIDType                 serialID;                 //��ˮ��
    DFITCSECFundsType                    operatorFunds;            //�������
    DFITCSECTimeType                     operatorTime;             //����ʱ��
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSECDateType                     operatorDate;             //��������
};

//STOCK-��ѯ�ͻ�֤ȯ������ϸ����
struct APISTRUCT DFITCStockReqQryTransferStockDetailField
{
    DFITCSECRequestIDType                requestID;                 //����ID(Y)
    DFITCSECAccountIDType                accountID;                 //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;                //����������(N)
    DFITCSECStockFreezeTypeType          stockFreezeType;           //�������(N)
    DFITCSECIncQryIndexType              incQryIndex;               //������ѯ����ֵ(N)
    DFITCSECSerialIDType                 serialID;                  //��ˮ��(N)
};

//STOCK-��ѯ�ͻ�֤ȯ������ϸ��Ӧ
struct APISTRUCT DFITCStockRspQryTransferStockDetailField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECAccountNameType              accountName;               //�ͻ�����
    DFITCSECBranchIDType                 branchID;                  //��������
    DFITCSECDateType                     operatorDate;              //��������
    DFITCSECExchangeIDType               exchangeID;                //����������
    DFITCSECStockFreezeTypeType          stockFreezeType;           //�������
    DFITCSECSecurityIDType               securityID;                //֤������
    DFITCSECSerialIDType                 serialID;                  //��ˮ��
    DFITCSECShareholderIDType            shareholderID;             //�ɶ���
    DFITCSECMessageType                  summaryMsg;                //ժҪ
    DFITCSECTimeType                     operatorTime;              //����ʱ��
    DFITCSECQuantityType                 operatorQty;               //��������
};

//STOCK-֤ȯ��Ϣ��ѯ����
struct APISTRUCT DFITCStockReqQryStockField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
    DFITCSECSecurityIDType               securityID;               //֤������(Y)
};

//STOCK-֤ȯ��Ϣ��ѯ��Ӧ
struct APISTRUCT DFITCStockRspQryStockField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECStockTradeFlagType           stopFlag;                 //ͣ�Ʊ�־
    DFITCSECPriceType                    latestPrice;              //���¼�
    DFITCSECPriceType                    preClosePrice;            //�����̼�
    DFITCSECPriceType                    openPrice;                //���̼�
    DFITCSECLargeQuantityType            tradeQty;                 //�ɽ�����
    DFITCSECFundsType                    turnover;                 //�ɽ����
    DFITCSECPriceType                    priceHigher;              //��߼�
    DFITCSECPriceType                    priceLower;               //��ͼ�
    DFITCSECPriceType                    bidPrice1;                //�����һ
    DFITCSECQuantityType                 bidQty1;                  //������һ
    DFITCSECPriceType                    askPrice1;                //������һ
    DFITCSECQuantityType                 askQty1;                  //������һ
    DFITCSECPriceType                    bidPrice2;                //����۶�
    DFITCSECQuantityType                 bidQty2;                  //��������
    DFITCSECPriceType                    askPrice2;                //�����۶�
    DFITCSECQuantityType                 askQty2;                  //��������
    DFITCSECPriceType                    bidPrice3;                //�������
    DFITCSECQuantityType                 bidQty3;                  //��������
    DFITCSECPriceType                    askPrice3;                //��������
    DFITCSECQuantityType                 askQty3;                  //��������
    DFITCSECPriceType                    bidPrice4;                //�������
    DFITCSECQuantityType                 bidQty4;                  //��������
    DFITCSECPriceType                    askPrice4;                //��������
    DFITCSECQuantityType                 askQty4;                  //��������
    DFITCSECPriceType                    bidPrice5;                //�������
    DFITCSECQuantityType                 bidQty5;                  //��������
    DFITCSECPriceType                    askPrice5;                //��������
    DFITCSECQuantityType                 askQty5;                  //��������
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECPriceType                    interestQuote;            //��Ϣ����
    DFITCSECPriceType                    securityFaceValue;        //֤ȯ��ֵ
    DFITCSECBidTradeFlagType             bidTradeFlag;             //���۽��ױ�־
    DFITCSECTradeUnitType                tradeUnit;                //���׵�λ
    DFITCSECBusinessLimitType            businessLimit;            //��������
    DFITCSECSecurityTypeType             securityType;             //֤ȯ���
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
    DFITCSECPriceType                    upperLimitPrice;          //��ͣ���
    DFITCSECPriceType                    lowerLimitPrice;          //��ͣ���
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECOrderTypeLimitType           orderLimits;              //������������
};

//STOCK-��ѯ����ʱ������
struct APISTRUCT DFITCStockReqQryTradeTimeField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
};

//STOCK-��ѯ����ʱ����Ӧ
struct APISTRUCT DFITCStockRspQryTradeTimeField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECDateType                     sysTradingDay;            //ϵͳ��ǰ����
    DFITCSECTimeType                     sysTime;                  //ϵͳ��ǰʱ��
};

//STOCK-ί�лر�
struct APISTRUCT DFITCStockEntrustOrderRtnField
{
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSessionIDType                sessionID;                //�Ự���
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECSecurityTypeType             securityType;             //֤ȯ���
    DFITCSECQuantityType                 withdrawQty;              //��������
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECFundsType                    freezeFunds;              //�����ʽ�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECDeclareResultType            declareResult;            //�걨���
    DFITCSECMessageType                  noteMsg;                  //���˵��
    DFITCSECQuantityType                 entrustQty;               //ί������
    DFITCSECOrderConfirmFlagType         orderConfirmFlag;         //ί��ȷ�ϱ�־
    DFITCSECTimeType                     entrustTime;              //ί��ʱ��
    DFITCSECPriceType                    entrustPrice;             //ί�м۸�
    DFITCSECOrderTypeType                orderType;                //��������
};

//STOCK-�ɽ��ر�
struct APISTRUCT DFITCStockTradeRtnField
{
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSessionIDType                sessionID;                //�Ự���
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECSecurityTypeType             securityType;             //֤ȯ���
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECTradeIDType                  tradeID;                  //�ɽ����
    DFITCSECTimeType                     tradeTime;                //�ɽ�ʱ��
    DFITCSECQuantityType                 withdrawQty;              //��������
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECFundsType                    clearFunds;               //�����ʽ�
    DFITCSECQuantityType                 totalTradeQty;            //ί���ܳɽ�����
    DFITCSECFundsType                    totalTurnover;            //ί���ܳɽ����
    DFITCSECQuantityType                 tradeQty;                 //���γɽ�����
    DFITCSECPriceType                    tradePrice;               //���γɽ��۸�
    DFITCSECFundsType                    turnover;                 //���γɽ����
    DFITCSECQuantityType                 entrustQty;               //ί������
    DFITCSECDeclareResultType            declareResult;            //�걨���(Ԥ���ֶ�)
    DFITCSECMessageType                  noteMsg;                  //���˵��(Ԥ���ֶ�)
};

//STOCK-�����ر�
struct APISTRUCT DFITCStockWithdrawOrderRtnField
{
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSessionIDType                sessionID;                //�Ự���
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECSecurityTypeType             securityType;             //֤ȯ���
    DFITCSECQuantityType                 withdrawQty;              //��������
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECFundsType                    freezeFunds;              //�����ʽ�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECQuantityType                 entrustQty;               //ί������
    DFITCSECDeclareResultType            declareResult;            //�걨���(Ԥ���ֶ�)
    DFITCSECMessageType                  noteMsg;                  //���˵��(Ԥ���ֶ�)
};

//SOP-ί������
struct APISTRUCT DFITCSOPReqEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
    DFITCSECSecurityIDType               securityID;               //֤������(Y)
    DFITCSECSubAccountIDType             subAccountID;             //���˻�����(N)(Ԥ���ֶ�)
    DFITCSECQuantityType                 entrustQty;               //ί������(Y)
    DFITCSECPriceType                    entrustPrice;             //ί�м۸�(N)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־(Y)
    DFITCSECCoveredFlagType              coveredFlag;              //��������(Y)
    DFITCSECOrderTypeType                orderType;                //��������(Y)
    DFITCSECOrderExpiryDateType          orderExpiryDate;          //����ʱЧ����(N)
    DFITCSECOrderCategoryType            orderCategory;            //ί�е����(Y)
    DFITCSECSerialIDType                 serialID;                 //��չ��ˮ��(N)(Ԥ���ֶ�)
    DFITCSECTDevIDType                   devID;                    //����ID(N)
    DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N)
	DFITCSECGroupCodeType                groupCode;                //��ϱ���(N)(��ϵ���ƽ����Ҫ)
};

//SOP-ί����Ӧ
struct APISTRUCT DFITCSOPRspEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECTimeType                     entrustTime;              //ί��ʱ��
    DFITCSECFundsType                    freezeFunds;              //�����ʽ�
};

//SOP-ί�лر�
struct APISTRUCT DFITCSOPEntrustOrderRtnField
{
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSessionIDType                sessionID;                //�Ự���
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECExchangeIDType               exchangeID;               //������
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־
    DFITCSECPriceType                    entrustPrice;             //ί�м۸�
    DFITCSECQuantityType                 entrustQty;               //ί������
    DFITCSECTimeType                     entrustTime;              //ί��ʱ��
    DFITCSECCoveredFlagType              coveredFlag;              //��������
    DFITCSECOrderTypeType                orderType;                //��������
    DFITCSECOrderExpiryDateType          orderExpiryDate;          //����ʱЧ����
    DFITCSECOrderCategoryType            orderCategory;            //ί�е����
	DFITCSECDeclareResultType            declareResult;            //�걨���
    DFITCSECMessageType                  noteMsg;                  //���˵��
    DFITCSECTDevIDType                   devID;                    //����ID(N),�µ�ʱ������ֶΣ��Ż᷵��
    DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N)���µ�ʱ������ֶΣ��Ż᷵��
    DFITCSECExchangeGroupTypeType        groupType;                //(Ԥ���ֶ�) �������(Y)
    DFITCSECGroupCodeType                groupCode;                //(Ԥ���ֶ�) ��ϱ���(Y) ���ί��ʱ������ֶβŻ᷵��
    DFITCSECSecurityIDType               securityOptionID1;        //(Ԥ���ֶ�) ��Ȩ����1��(Y)
    DFITCSECSecurityIDType               securityOptionID2;        //(Ԥ���ֶ�) ��Ȩ����2��(Y)
    DFITCSECSecurityIDType               securityOptionID3;        //(Ԥ���ֶ�) ��Ȩ����3��(N)(Ԥ���ֶ�)
    DFITCSECSecurityIDType               securityOptionID4;        //(Ԥ���ֶ�) ��Ȩ����4��(N)(Ԥ���ֶ�)
};

//SOP-�ɽ��ر�
struct APISTRUCT DFITCSOPTradeRtnField
{
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSessionIDType                sessionID;                //�Ự���
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECExchangeIDType               exchangeID;               //������
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־
    DFITCSECCoveredFlagType              coveredFlag;              //���ұ�־
    DFITCSECOrderCategoryType            orderCategory;            //ί�е����
    DFITCSECFundsType                    tradePrice;               //�ɽ��۸�
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
    DFITCSECTradeIDType                  tradeID;                  //�ɽ����
    DFITCSECSerialIDType                 rtnSerialID;              //�ر����
    DFITCSECDeclareOrderIDType           declareOrderID;           //�걨ί�к�
    DFITCSECDeclareResultType            declareResult;            //�걨���
    DFITCSECMessageType                  noteMsg;                  //���˵��
    DFITCSECTDevIDType                   devID;                    //����ID(N),�µ�ʱ������ֶΣ��Ż᷵��
    DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N),�µ�ʱ������ֶΣ��Ż᷵��
    DFITCSECTimeType                     tradeTime;                //�ɽ�ʱ��
    DFITCSECGroupCodeType                groupCode;                //��ϱ���(��ϳɽ��������)
    DFITCSECExchangeGroupTypeType        groupType;                //(Ԥ���ֶ�) �������(Y)
    DFITCSECSecurityIDType               securityOptionID1;        //(Ԥ���ֶ�) ��Ȩ����1��(Y)
    DFITCSECSecurityIDType               securityOptionID2;        //(Ԥ���ֶ�) ��Ȩ����2��(Y)
    DFITCSECSecurityIDType               securityOptionID3;        //(Ԥ���ֶ�) ��Ȩ����3��(N)(Ԥ���ֶ�)
    DFITCSECSecurityIDType               securityOptionID4;        //(Ԥ���ֶ�) ��Ȩ����4��(N)(Ԥ���ֶ�)
};

//SOP-�����ر�
struct APISTRUCT DFITCSOPWithdrawOrderRtnField
{
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSessionIDType                sessionID;                //�Ự���
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־
    DFITCSECQuantityType                 withdrawQty;              //��������
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
	DFITCSECDeclareResultType            declareResult;            //�걨���
    DFITCSECMessageType                  noteMsg;                  //���˵��
    DFITCSECFundsType                    wdUnFreezeFunds;          //�����ⶳ�ʽ�
    DFITCSECTDevIDType                   devID;                    //����ID(N),�µ�ʱ������ֶΣ��Ż᷵��
    DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N),�µ�ʱ������ֶΣ��Ż᷵��
	DFITCSECGroupCodeType                groupCode;                //(Ԥ���ֶ�)��ϱ���(��ϵ���ƽ��)
	DFITCSECSecurityIDType               securityOptionID1;        //(Ԥ���ֶ�) ��Ȩ����1��(Y)
	DFITCSECSecurityIDType               securityOptionID2;        //(Ԥ���ֶ�) ��Ȩ����2��(Y)
};

//SOP-����˫�߱���ί�лر�
struct APISTRUCT DFITCSOPQuoteEntrustOrderRtnField
{
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECSessionIDType                sessionID;                //�Ự���
	DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
	DFITCSECBranchIDType                 branchID;                 //��������
	DFITCSECExchangeIDType               exchangeID;               //������
	DFITCSECShareholderIDType            shareholderID;            //�ɶ���
	DFITCSECSubAccountIDType             subAccountID;             //���˻�����
	DFITCSECSecurityIDType               securityID;               //֤������
	DFITCSECTrusteeshipUnitType          trusteeshipUnit;          //�йܵ�Ԫ
	DFITCSECWithdrawFlagType             withdrawFlag;             //������־
	DFITCSECTradeIDType                  tradeID;                  //�ɽ����
	DFITCSECTimeType                     tradeTime;                //ί��ʱ��
	DFITCSECCurrencyType                 currency;                 //����
	DFITCSECSpdOrderIDType               withdrawOrderID;          //����ί�к�
	DFITCSECTDevIDType                   devID;                    //����ID(N),�µ�ʱ������ֶΣ��Ż᷵��
	DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N),�µ�ʱ������ֶΣ��Ż᷵��


	DFITCSECEntrustDirectionType         bidEntrustDirection;      //ί�����1
	DFITCSECOpenCloseFlagType            bidOpenCloseFlag;         //��ƽ��־1
	DFITCSECCoveredFlagType              bidCoveredFlag;           //���ұ�־1
	DFITCSECQuantityType                 bidQty;                   //ί������1
	DFITCSECPriceType                    bidPrice;                 //ί�м۸�1
	DFITCSECPriceType	                 bidTransactionAmount;	   //ί�н��1
	DFITCSECDeclareResultType            bidDeclareResult;         //�걨���1
	DFITCSECMessageType                  bidNoteMsg;               //���˵��1
	
	DFITCSECEntrustDirectionType         askEntrustDirection;      //ί�����2
	DFITCSECOpenCloseFlagType            askOpenCloseFlag;         //��ƽ��־2
	DFITCSECCoveredFlagType              askCoveredFlag;           //���ұ�־2
	DFITCSECQuantityType                 askQty;                   //ί������2
	DFITCSECPriceType                    askPrice;                 //ί�м۸�2
	DFITCSECPriceType	                 askTransactionAmount;	   //ί�н��2
	DFITCSECDeclareResultType            askDeclareResult;         //�걨���2
	DFITCSECMessageType                  askNoteMsg;               //���˵��2

};
//SOP-�����̱�������
struct APISTRUCT DFITCSOPReqQuoteEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
    DFITCSECSecurityIDType               securityID;               //֤������(Y)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(N)
    DFITCSECQuantityType                 bidQty;                   //��ί������(Y)
    DFITCSECPriceType                    bidPrice;                 //��ί�м۸�(Y)
    DFITCSECOpenCloseFlagType            bidOpenCloseFlag;         //��ƽ��־(Y)
    DFITCSECCoveredFlagType              bidCoveredFlag;           //�򱸶ұ�־(Y)
    DFITCSECQuantityType                 askQty;                   //��ί������(Y)
    DFITCSECPriceType                    askPrice;                 //��ί�м۸�(Y)
    DFITCSECOpenCloseFlagType            askOpenCloseFlag;         //����ƽ��־(Y)
    DFITCSECCoveredFlagType              askCoveredFlag;           //�����ұ�־(Y)
    DFITCSECOrderTypeType                orderType;                //��������(Y)
    DFITCSECOrderExpiryDateType          orderExpiryDate;          //����ʱЧ����(Y)
    DFITCSECOrderCategoryType            orderCategory;            //ί�е����(Y)
    DFITCSECQuoteIDType                  quoteID;                  //ѯ�۱��(N)
    DFITCSECTDevIDType                   devID;                    //����ID(N)
    DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N)
};

//SOP-�����̱�����Ӧ
struct APISTRUCT DFITCSOPRspQuoteEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECTimeType                     entrustTime;              //ί��ʱ��
    DFITCSECFundsType                    freezeFunds;              //�����ʽ�
};

//SOP-֤ȯ��������ί������
struct APISTRUCT DFITCSOPReqLockOUnLockStockField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
    DFITCSECSubAccountIDType             subAccountID;             //���˻����� (N)
    DFITCSECSecurityIDType               securityID;               //��Լ����(Y)
    DFITCSECQuantityType                 entrustQty;               //ί������(Y)
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־(Y)
    DFITCSECTDevIDType                   devID;                    //����ID(N)
    DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N)
};

//SOP-֤ȯ��������ί����Ӧ
struct APISTRUCT DFITCSOPRspLockOUnLockStockField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECTimeType                     entrustTime;              //ί��ʱ��
    DFITCSECFundsType                    freezeFunds;              //�����ʽ�
};

//SOP-�ֱʳɽ���ѯ����
struct APISTRUCT DFITCSOPReqQrySerialTradeField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECSecurityIDType               securityID;               //֤������(N)
    DFITCSECSpdOrderIDType               spdOrderID;               //ί�к�(N)
    DFITCSECIncQryIndexType              incQryIndex;              //������ѯ����ֵ(N)(Ԥ���ֶ�)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(N)
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)(Ԥ���ֶ�)
    DFITCSECTradeQryFlagType             tradeQryFlag;             //��ѯ��־(N)(Ԥ���ֶ�)
    DFITCSECCurrencyType                 currency;                 //����(N)
    DFITCSECQuantityType                 rowIndex;                 //��ҳ����ֵ(N)
    DFITCSECQuantityType                 rowCount;                 //ÿҳ��ѯ����(N)
};

//SOP-�ֱʳɽ���ѯ��Ӧ
struct APISTRUCT DFITCSOPRspQrySerialTradeField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSerialIDType                 rtnSerialID;              //�ر����
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECDeclareOrderIDType           declareOrderID;           //�걨ί�к�
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECTradeIDType                  tradeID;                  //�ɽ����
    DFITCSECTimeType                     tradeTime;                //�ɽ�ʱ��
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־
    DFITCSECCoveredFlagType              coveredFlag;              //���ұ�־
    DFITCSECSpdOrderIDType               spdOrderID;               //ί�к�
    DFITCSECFundsType                    turnover;                 //�ɽ����
    DFITCSECPriceType                    tradePrice;               //�ɽ��۸�
    DFITCSECFundsType                    clearFunds;               //�����ʽ�
    DFITCSECTimeType                     rotationTime;             //��תʱ��
    DFITCSECIncQryIndexType              incQryIndex;              //��ҳ����ֵ
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECAccountIDType                capitalID;                //�ʽ��˺�
    DFITCSECTDevIDType                   devID;                    //����ID(N),ί��ʱ������ֶβŻ᷵��
    DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N),ί��ʱ������ֶβŻ᷵��
    DFITCSECExchangeGroupTypeType        groupType;                //(Ԥ���ֶ�) �������(Y)
    DFITCSECGroupCodeType                groupCode;                //(Ԥ���ֶ�) ��ϱ���(Y) ���ί��ʱ������ֶβŻ᷵��
    DFITCSECSecurityIDType               securityOptionID1;        //(Ԥ���ֶ�) ��Ȩ����1��(Y)
    DFITCSECSecurityIDType               securityOptionID2;        //(Ԥ���ֶ�) ��Ȩ����2��(Y)
    DFITCSECSecurityIDType               securityOptionID3;        //(Ԥ���ֶ�) ��Ȩ����3��(N)(Ԥ���ֶ�)
    DFITCSECSecurityIDType               securityOptionID4;        //(Ԥ���ֶ�) ��Ȩ����4��(N)(Ԥ���ֶ�)
};

//SOP-ί�в�ѯ����
struct APISTRUCT DFITCSOPReqQryEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����(N)
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־(N)
    DFITCSECSerialIDType                 exSerialID;               //��չ��ˮ��(N)(Ԥ���ֶ�)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(N)
    DFITCSECSpdOrderIDType               spdOrderID;               //ί�к�(N)
    DFITCSECEntrustQryFlagType           entrustQryFlag;           //��ѯ��־(N)
    DFITCSECQuantityType                 rowIndex;                 //��ҳ����ֵ(N)
    DFITCSECQuantityType                 rowCount;                 //ÿҳ��ѯ����(N)
};

//SOP-ί�в�ѯ��Ӧ
struct APISTRUCT DFITCSOPRspQryEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSpdOrderIDType               spdOrderID;               //ί�к�
    DFITCSECDeclareOrderIDType           withdrawOrderID;          //����ί�к�
    DFITCSECDeclareOrderIDType           declareOrderID;           //�걨ί�к�
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECWithdrawFlagType             withdrawFlag;             //������־
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����
    DFITCSECOptionTypeType               optType;                  //��Ȩ���
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־
    DFITCSECCoveredFlagType              coveredFlag;              //���ұ�־
    DFITCSECQuantityType                 entrustQty;               //ί������
    DFITCSECPriceType                    entrustPrice;             //ί�м۸�
    DFITCSECDateType                     entrustDate;              //ί������
    DFITCSECTimeType                     entrustTime;              //ί��ʱ��
    DFITCSECShareholderIDType            offerShareholderID;       //���̹ɶ���
    DFITCSECDateType                     declareDate;              //�걨����
    DFITCSECTimeType                     declareTime;              //�걨ʱ��
    DFITCSECSerialIDType                 declareSerialID;          //�걨��¼��
    DFITCSECDeclareResultType            declareResult;            //�걨���
    DFITCSECMessageType                  noteMsg;                  //���˵��
    DFITCSECQuantityType                 withdrawQty;              //��������
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
    DFITCSECFundsType                    turnover;                 //�ɽ����
    DFITCSECPriceType                    tradePrice;               //�ɽ��۸�
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECFundsType                    freezeFunds;              //�����ʽ�
    DFITCSECFundsType                    clearFunds;               //�����ʽ�
    DFITCSECEntrustTypeType              entrustType;              //ί�з�ʽ
    DFITCSECMacAddressType               macAddr;                  //MAC��ַ
    DFITCSECIPAddressType                ipAddr;                   //IP��ַ
    DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�
    DFITCSECOrderTypeType                orderType;                //ί������
    DFITCSECIncQryIndexType              incQryIndex;              //������ѯ����ֵ
    DFITCSECAccountIDType                capitalID;                //�ʽ��˺�
    DFITCSECOrderExpiryDateType          orderExpiryDate;          //����ʱЧ����
    DFITCSECTDevIDType                   devID;                    //����ID(N),ί��ʱ������ֶβŻ᷵��
    DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N),ί��ʱ������ֶβŻ᷵��
    DFITCSECExchangeGroupTypeType        groupType;                //�������(Y)
    DFITCSECGroupCodeType                groupCode;                //��ϱ���(Y) ���ί��ʱ������ֶβŻ᷵��
    DFITCSECSecurityIDType               securityOptionID1;        //��Ȩ����1��(Y)
    DFITCSECSecurityIDType               securityOptionID2;        //��Ȩ����2��(Y)
    DFITCSECSecurityIDType               securityOptionID3;        //��Ȩ����3��(N)(Ԥ���ֶ�)
    DFITCSECSecurityIDType               securityOptionID4;        //��Ȩ����4��(N)(Ԥ���ֶ�)
};

//SOP-�ֲֲ�ѯ����
struct APISTRUCT DFITCSOPReqQryPositionField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����(N)
    DFITCSECQuantityType                 rowIndex;                 //��ҳ����ֵ(N)  �����ã�����ҳȫ�����ͣ�
    DFITCSECQuantityType                 rowCount;                 //ÿҳ��ѯ����(N)�����ã�����ҳȫ�����ͣ�
};

//SOP-�ֲֲ�ѯ��Ӧ
struct APISTRUCT DFITCSOPRspQryPositionField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSubAccountIDType             subAccountID;             //���˻�����
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����
    DFITCSECContractIDType               contractID;               //��Ȩ����
    DFITCSECContractNameType             contractName;             //��Ȩ����
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECCoveredFlagType              coveredFlag;              //���ұ�־
    DFITCSECDateType                     executeDate;              //��Ȩ����
    DFITCSECQuantityType                 totalQty;                 //��ǰ����
    DFITCSECQuantityType                 availableQty;             //��������
    DFITCSECFundsType                    latestPrice;              //���¼�
    DFITCSECFundsType                    optionMarket;             //��Ȩ��ֵ
    DFITCSECQuantityType                 freezeQty;                //��������
    DFITCSECQuantityType                 executeQty;               //ִ������
    DFITCSECQuantityType                 openEntrustQty;           //����ί������
    DFITCSECQuantityType                 openTradeQty;             //���ֳɽ�����
    DFITCSECQuantityType                 prePosition;              //��ֲ�
    DFITCSECQuantityType                 closeEntrustQty;          //ƽ��ί������
    DFITCSECQuantityType                 closeTradeQty;            //ƽ�ֳɽ�����
    DFITCSECFundsType                    deposit;                  //��֤��
    DFITCSECFundsType                    openDeposit;              //���տ��ֱ�֤��
    DFITCSECFundsType                    closeDeposit;             //����ƽ�ֱ�֤��
    DFITCSECFundsType                    exchangeDeposit;          //��������֤��
    DFITCSECFundsType                    exchangeOpenDeposit;      //���������ֱ�֤��
    DFITCSECFundsType                    exchangeCloseDeposit;     //������ƽ�ֱ�֤��
    DFITCSECFundsType                    openAvgPrice;             //���־���
    DFITCSECOptionTypeType               optType;                  //��Ȩ����
    DFITCSECContractObjectTypeType       contractObjectType;       //�������
    DFITCSECContractUnitType             contractUnit;             //��Լ��λ
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECFundsType                    totalTradeCost;           //�ۼƽ��׳ɱ�(������λ���ۼ�)
    DFITCSECFundsType                    tradeCost;                //���ս��׳ɱ�(ʵʱ����)
    DFITCSECFundsType                    realizeProfitLoss;        //ʵ��ӯ��(Ԥ���ֶ�)
    DFITCSECFundsType                    profitLoss;               //ӯ�����(Ԥ���ֶ�)
    DFITCSECContractAdjustRemindType     adjustRemind;             //��Լ�������ѱ�־
    DFITCSECContraceExpireRemindType     expireRemind;             //��Լ�����������ѱ�־
};

//SOP-�ͻ������ֲֲ�ѯ����
struct APISTRUCT DFITCSOPReqQryCollateralPositionField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)(��������֤ȯ������Ҫͬʱ����)
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(N)(��������֤ȯ������Ҫͬʱ����)
};

//SOP-�ͻ������ֲֲ�ѯ��Ӧ
struct APISTRUCT DFITCSOPRspQryCollateralPositionField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
    DFITCSECQuantityType                 availableQty;             //��������
};

//SOP-�ͻ��ʽ��ѯ����
struct APISTRUCT DFITCSOPReqQryCapitalAccountField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECCurrencyType                 currency;                 //����(N)(��ǰֻ֧�������)
    DFITCSECFundsQryFlagType             FundsQryFlag;             //��ѯ��־(Ԥ���ֶ�)
};

//SOP-�ͻ��ʽ��ѯ��Ӧ
struct APISTRUCT DFITCSOPRspQryCapitalAccountField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECFundsType                    accountBanlance;          //�˻����
    DFITCSECFundsType                    availableFunds;           //�����ʽ�
    DFITCSECFundsType                    freezeFunds;              //�����ʽ�
    DFITCSECFundsType                    anticipatedInterest;      //Ԥ����Ϣ
    DFITCSECFundsType                    usedDeposit;              //ռ�ñ�֤��
    DFITCSECAccountStatusType            accountStatus;            //�ͻ�״̬
    DFITCSECFundsType                    totalFunds;               //���ʽ�
    DFITCSECFundsType                    totalMarket;              //����ֵ
    DFITCSECFundsType                    cashAssets;               //�ֽ��ʲ�
    DFITCSECFundsType                    execGuaranteeRatio;       //��Լ��������
    DFITCSECFundsType                    buyLimits;                //������
	DFITCSECFundsType                    desirableFunds;           //��ȡ�ʽ�
};

//SOP-�ͻ���Ϣ��ѯ����
struct APISTRUCT  DFITCSOPReqQryAccountField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
};

//SOP-�ͻ���Ϣ��ѯ��Ӧ
struct APISTRUCT  DFITCSOPRspQryAccountField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECAccountNameType              accountName;              //�ͻ�����
    DFITCSECAccountNameType              accountFullName;          //�ͻ�ȫ��
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSECAccountIdentityTypeType      identityType;             //֤������
    DFITCSECAccountIdentityIDType        accountIdentityID;        //֤�����
    DFITCSECPhoneIDType                  tel;                      //�ͻ��绰
    DFITCSECPhoneIDType                  mobile;                   //�ƶ��绰
    DFITCSECAccountTypeType              accountType;              //Ͷ���߷���
    DFITCSECAccountPropType              accountProp;              //�ͻ�����
    DFITCSECTradePermissionsType         tradePermissions;         //����Ȩ��(Ԥ���ֶ�)
    DFITCSECEntrustTypeType              entrustType;              //ί�з�ʽ
    DFITCSECAccountStatusType            accountStatus;            //�ͻ�״̬
    DFITCSECPasswdSyncFlagType           pwdSynFlag;               //����ͬ����־
    DFITCSECAccountNodeIDType            accountNodeID;            //�ͻ������ڵ���
};

//SOP-��ί��������ѯ����
struct APISTRUCT DFITCSOPReqCalcAbleEntrustQtyField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
    DFITCSECSubAccountIDType             subAccountID;             //���˻�����(N)
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����(Y)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־(Y)
    DFITCSECCoveredFlagType              coveredFlag;              //���ұ�־(N)
    DFITCSECPriceType                    entrustPrice;             //ί�м۸�(N)
    DFITCSECCheckUpLimitFlagType         checkUpLimit;             //�Ƿ���ί������(N)
    DFITCSECTDevIDType                   devID;                    //����ID(N)
    DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N)
	DFITCSECGroupCodeType                groupCode;                //��ϱ���(N)(������ϵ���ƽ�ֿ�ί��������Ҫ)
};

//SOP-��ί��������ѯ��Ӧ
struct APISTRUCT DFITCSOPRspCalcAbleEntrustQtyField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����
    DFITCSECQuantityType                 entrustQty;               //ί������
};

//SOP-�ɶ���Ϣ��ѯ����
struct APISTRUCT  DFITCSOPReqQryShareholderField
{
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
};

//SOP-�ɶ���Ϣ��ѯ��Ӧ
struct APISTRUCT  DFITCSOPRspQryShareholderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECTradePermissionsType         tradePermissions;         //����Ȩ��
    DFITCSECShareholderSpecPropType      shareholderSpecProp;      //�ɶ�ָ������
    DFITCSECShareholderCtlPropType       shareholderCtlProp;       //�ɶ���������
    DFITCSECShareholderStatusType        shareholderStatus;        //�ɶ�״̬
    DFITCSECMainAccountFlagType          mainAccountFlag;          //���˻���־
    DFITCSECExchangeIDType               exchangeID;               //����������
};

//SOP-�ͻ�������֤ȯ��ѯ����
struct APISTRUCT DFITCSOPReqQryAbleLockStockField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(Y)
};

//SOP-�ͻ�������֤ȯ��ѯ��Ӧ
struct APISTRUCT DFITCSOPRspQryAbleLockStockField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECSecurityNameType             securityName;             //֤ȯ����(Ԥ���ֶ�)
    DFITCSECQuantityType                 securityQty;              //��������(Ԥ���ֶ�)
    DFITCSECQuantityType                 position;                 //��ǰ����(Ԥ���ֶ�)
    DFITCSECPriceType                    avgPositionPrice;         //�ֲ־���(Ԥ���ֶ�)
    DFITCSECFundsType                    dilutedCost;              //̯���ɱ���(Ԥ���ֶ�)
    DFITCSECPriceType                    breakevenPrice;           //������(Ԥ���ֶ�)
    DFITCSECPriceType                    dilutedBreakevenPrice;    //̯��������(Ԥ���ֶ�)
    DFITCSECQuantityType                 ableSellQty;              //����������
    DFITCSECFundsType                    latestMarket;             //������ֵ(Ԥ���ֶ�)
    DFITCSECPriceType                    latestPrice;              //���¼�(Ԥ���ֶ�)
    DFITCSECFundsType                    floatProfitLoss;          //����ӯ��(Ԥ���ֶ�)
    DFITCSECFundsType                    dilutedFloatProfitLoss;   //̯������ӯ��(Ԥ���ֶ�)
    DFITCSECTradeUnitType                tradeUnit;                //���׵�λ(Ԥ���ֶ�)
    DFITCSECQuantityType                 openBuyQty;               //�񿪲�����ֲ���(Ԥ���ֶ�)
    DFITCSECQuantityType                 openSellQty;              //�񿪲������ֲ���(Ԥ���ֶ�)
    DFITCSECQuantityType                 buyUnSettleQty;           //����δ���ճֲ���(Ԥ���ֶ�)
    DFITCSECQuantityType                 sellUnSettleQty;          //����δ���ճֲ���(Ԥ���ֶ�)
    DFITCSECQuantityType                 openEntrustSellQty;       //�񿪲�ί��������(Ԥ���ֶ�)
    DFITCSECQuantityType                 ableLockQty;              //����������
};

//SOP-�ͻ���Ȩָ����Ϣ��ѯ����
struct APISTRUCT DFITCSOPReqQryExecAssiInfoField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����(N)
    DFITCSECDateType                     tradeDate;                //��ѯ����(N)
};

//SOP-�ͻ���Ȩָ����Ϣ��ѯ��Ӧ
struct APISTRUCT DFITCSOPRspQryExecAssiInfoField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECDateType                     tradeDate;                //�ɽ�����
    DFITCSECBranchIDType                 branchID;                 //��������
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECSubAccountIDType             subAccountID;             //���˻�
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECOptionTypeType               optType;                  //��Ȩ����
    DFITCSECContractObjectTypeType       contractObjectType;       //�������
    DFITCSECCoveredFlagType              coveredFlag;              //���ұ�־
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECSecurityIDType               securityID;               //��Ĵ���
    DFITCSECSeatIDType                   seatID;                   //ϯλ����
    DFITCSECPriceType                    execPrice;                //��Ȩ�۸�
    DFITCSECQuantityType                 execQty;                  //��Ȩ����
    DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
    DFITCSECFundsType                    clearFunds;               //������
    DFITCSECFundsType                    settleFunds;              //������
    DFITCSECFundsType                    commission;               //Ӷ��
    DFITCSECFundsType                    stampTax;                 //ӡ��˰
    DFITCSECFundsType                    transferFee;              //������
    DFITCSECFundsType                    fee3;                     //����3
    DFITCSECFundsType                    fee4;                     //����4
    DFITCSECMessageType                  summaryMsg;               //ժҪ
};

//SOP-��Ȩ��Լ�����ѯ����
struct APISTRUCT DFITCSOPReqQryContactField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����(N)
    DFITCSECSecurityIDType               securityID;               //��Ĵ���(N)
    DFITCSECContractObjectTypeType       contractObjectType;       //�������(N)
    DFITCSECOptionTypeType               optType;                  //��Ȩ����(N)
    DFITCSECSecurityIDType               rowIndex;                 //��ҳ����ֵ(Ԥ���ֶ�)(N)
    DFITCSECQuantityType                 rowCount;                 //ÿҳ��ѯ����(Ԥ���ֶ�)(N)
};

//SOP-��Ȩ��Լ�����ѯ��Ӧ
struct APISTRUCT DFITCSOPRspQryContactField
{
    DFITCSECRequestIDType               requestID;                 //����ID
    DFITCSECAccountIDType               accountID;                 //�ͻ���
    DFITCSECExchangeIDType              exchangeID;                //������
    DFITCSECSecurityIDType              securityOptionID;          //��Ȩ���״���(10000031)
    DFITCSECContractIDType              contractID;                //��Ȩ��ʶ����(600104C1406M01200)
    DFITCSECContractNameType            contractName;              //��Ȩ����(�������Ź�6��1200)
    DFITCSECSecurityIDType              securityID;                //��Ĵ���(600104)
    DFITCSECContractObjectTypeType      contractObjectType;        //�������
    DFITCSECExecuteTypeType             execType;                  //��Ȩ��ʽ
    DFITCSECDeliveryTypeType            deliType;                  //���ʽ(Ԥ���ֶ�)
    DFITCSECOptionTypeType              optType;                   //��Ȩ����
    DFITCSECContractUnitType            contactUnit;               //��Լ��λ
    DFITCSECFundsType                   latestPrice;               //���¼�
    DFITCSECDateType                    beginTradingDay;           //��ʼ������
    DFITCSECDateType                    endTradingDay;             //�������
    DFITCSECDateType                    execDate;                  //��Ȩ����
    DFITCSECDateType                    endDate;                   //������
    DFITCSECQuantityType                positionUpLimit;           //�ֲ�����
    DFITCSECFundsType                   priceUpLimit;              //��ͣ��
    DFITCSECFundsType                   priceDownLimit;            //��ͣ��
    DFITCSECFundsType                   priceHigher;               //��߼�
    DFITCSECFundsType                   priceLower;                //��ͼ�
    DFITCSECQuantityType                entrustUpLimit;            //ί������
    DFITCSECQuantityType                entrustDownLimit;          //ί������
    DFITCSECQuantityType                entrustUpLimitMarketPri;   //�м�ί������(MP=Market Price)
    DFITCSECQuantityType                entrustDownLimitMarketPri; //�м�ί������
    DFITCSECOpenLimitsType              openLimit;                 //��������
    DFITCSECStockTradeFlagType          stockTradeFlag;            //ͣ�Ʊ�־
    DFITCSECFundsType                   depositUnit;               //��λ��֤��
    DFITCSECFundsType                   depositRatioC;             //��֤�����1
    DFITCSECFundsType                   depositRatioE;             //��֤�����2
    DFITCSECPriceType                   preClosePrice;             //�����̼�
    DFITCSECPriceType                   closePrice;                //�����̼�
    DFITCSECPriceType                   preSettlePrice;            //������
    DFITCSECPriceType                   openPrice;                 //���̼�
    DFITCSECLargeQuantityType           tradeQty;                  //�ɽ�����
    DFITCSECFundsType                   turnover;                  //�ɽ����
    DFITCSECPriceType                   settlePrice;               //�����(Ԥ���ֶ�)
    DFITCSECPriceType                   endCashSettlePrice;        //�����ֽ�����
    DFITCSECQuantityType                handQty;                   //������
    DFITCSECQuantityType                unClosePositionQty;        //δƽ�ֺ�Լ
    DFITCSECApproachExpireFlagType      approachExpireFlag;        //�ٽ����ڱ�־
    DFITCSECTempAdjuestFlagType         tempAdjustFlag;            //��ʱ������־
    DFITCSECStockListFlagType           stockListFlag;             //��Ʊ���Ʊ�־
    DFITCSECFundsType                   execPrice;                 //��Ȩ�۸�
    DFITCSECFundsType                   bidPrice1;                 //�����1
    DFITCSECQuantityType                bidQty1;                   //������1
    DFITCSECFundsType                   bidPrice2;                 //�����2
    DFITCSECQuantityType                bidQty2;                   //������2
    DFITCSECFundsType                   bidPrice3;                 //�����3
    DFITCSECQuantityType                bidQty3;                   //������3
    DFITCSECFundsType                   bidPrice4;                 //�����4
    DFITCSECQuantityType                bidQty4;                   //������4
    DFITCSECFundsType                   bidPrice5;                 //�����5
    DFITCSECQuantityType                bidQty5;                   //������5
    DFITCSECFundsType                   askPrice1;                 //������1
    DFITCSECQuantityType                askQty1;                   //������1
    DFITCSECFundsType                   askPrice2;                 //������2
    DFITCSECQuantityType                askQty2;                   //������2
    DFITCSECFundsType                   askPrice3;                 //������3
    DFITCSECQuantityType                askQty3;                   //������3
    DFITCSECFundsType                   askPrice4;                 //������4
    DFITCSECQuantityType                askQty4;                   //������4
    DFITCSECFundsType                   askPrice5;                 //������5
    DFITCSECQuantityType                askQty5;                   //������5
    DFITCSESecurityOptionIndexType      optionIndex;               //��Ʊ��Ȩ����ֵ
    DFITCSECMiniPriceChangeType         miniPriceChange;           //��С�䶯��λ
};

//SOP-��Ȩ�����Ϣ��ѯ����
struct APISTRUCT DFITCSOPReqQryContractObjectField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECSecurityIDType               securityID;               //��Ĵ���(N)
    DFITCSECContractObjectTypeType       securityObjectType;       //�������(N)
};

//SOP-��Ȩ�����Ϣ��ѯ��Ӧ
struct APISTRUCT DFITCSOPRspQryContractObjectField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityNameType             securityName;             //���֤ȯ����
    DFITCSECSecurityIDType               securityID;               //��Ĵ���
    DFITCSECContractObjectTypeType       contractObjectType;       //�������
    DFITCSECContractObjectStatusType     contractObjectStatus;     //���֤ȯ״̬
};

//SOP-ִ��ί������
struct APISTRUCT DFITCSOPReqExectueOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����(Y)
    DFITCSECSubAccountIDType             subAccountID;             //���˻�����(N)
    DFITCSECQuantityType                 entrustQty;               //ί������(Y)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־(Y)
    DFITCSECTDevIDType                   devID;                    //����ID(N)
    DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N)
};

//SOP-ִ��ί����Ӧ
struct APISTRUCT DFITCSOPRspExectueOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECTimeType                     entrustTime;              //ί��ʱ��
    DFITCSECFundsType                    freezeFunds;              //�����ʽ�
};

//SOP-��ѯ����ʱ������
struct APISTRUCT DFITCSOPReqQryTradeTimeField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
};

//SOP-��ѯ����ʱ����Ӧ
struct APISTRUCT DFITCSOPRspQryTradeTimeField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECDateType                     sysTradingDay;            //ϵͳ��ǰ����
    DFITCSECTimeType                     sysTime;                  //ϵͳ��ǰʱ��
};

//SOP-��ȡ���н�������������
struct APISTRUCT DFITCSOPReqQryExchangeInfoField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
};

//SOP-��ȡ���н�����������Ӧ
struct APISTRUCT DFITCSOPRspQryExchangeInfoField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECExchangeNameType             exchangeName;             //���������
    DFITCSECTimeType                     callauctionBegining;      //���Ͼ��ۿ�ʼʱ��
    DFITCSECTimeType                     callauctionEnding;        //���Ͼ��۽���ʱ��
    DFITCSECTimeType                     morningOpening;           //���翪��ʱ��
    DFITCSECTimeType                     morningClosing;           //�������ʱ��
    DFITCSECTimeType                     afternoonOpening;         //���翪��ʱ��
    DFITCSECTimeType                     afternoonClosing;         //�������ʱ��
    DFITCSECTimeType                     execOpening;              //��Ȩ��ʼʱ��
    DFITCSECTimeType                     execClosing;              //��Ȩ����ʱ��
    DFITCSECNightTradingFlagType         nightTradeFlag;           //ҹ�н��ױ�־
    DFITCSECTimeType                     nightOpening;             //ҹ�п�ʼʱ��
    DFITCSECTimeType                     nightClosing;             //ҹ�н���ʱ��
    DFITCSECStockTradeFlagType           stockTradeStatus;         //����״̬
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECTradingDayFlagType           tradingDayFlag;           //�����ձ�ʶ
};

//SOP-��ѯ�����Ѳ�������
struct APISTRUCT DFITCSOPReqQryCommissionField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECReferenceTypeType            refType;                  //�������(N)
    DFITCSECContractObjectTypeType       contractObjectType;       //�������(N)
    DFITCSECSecurityIDType               securityID;               //�������(N)
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־(N)
    DFITCSECLvelType                     level;                    //����(Y)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(N)
};

//SOP-��ѯ�����Ѳ�����Ӧ
struct APISTRUCT DFITCSOPRspQryCommissionField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECReferenceTypeType            refType;                  //�������
    DFITCSECContractObjectTypeType       contractObjectType;       //�������
    DFITCSECSecurityIDType               securityID;               //�������
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
    DFITCSECLvelType                     level;                    //����
    DFITCSECFundsType                    costRatio1;               //���ñ���1
    DFITCSECFundsType                    unitCost1;                //��λ����1
    DFITCSECFundsType                    costUpLimit1;             //��������1
    DFITCSECFundsType                    costDonwLimit1;           //��������1
    DFITCSECFundsType                    costRatio2;               //���ñ���2
    DFITCSECFundsType                    unitCost2;                //��λ����2
    DFITCSECFundsType                    costUpLimit2;             //��������2
    DFITCSECFundsType                    costDonwLimit2;           //��������2
    DFITCSECFundsType                    costRatio3;               //���ñ���3
    DFITCSECFundsType                    unitCost3;                //��λ����3
    DFITCSECFundsType                    costRatio4;               //���ñ���4
    DFITCSECFundsType                    unitCost4;                //��λ����4
};

//SOP-��ѯ��֤���ʲ�������
struct APISTRUCT DFITCSOPReqQryDepositField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
    DFITCSECReferenceTypeType            refType;                  //�������(N)
    DFITCSECContractObjectTypeType       securityObjectType;       //�������(N)
    DFITCSECSecurityIDType               securityID;               //�������(N)
    DFITCSECLvelType                     level;                    //����(Y)
};

//SOP-��ѯ��֤���ʲ�����Ӧ
struct APISTRUCT DFITCSOPRspQryDepositField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECReferenceTypeType            refType;                  //�������
    DFITCSECContractObjectTypeType       securityObjectType;       //�������
    DFITCSECSecurityIDType               securityID;               //�������
    DFITCSECFundsType                    depositRateC;             //��֤�����1
    DFITCSECFundsType                    depositRateE;             //��֤�����2
    DFITCSECFundsType                    depositUnit;              //��λ��֤��
    DFITCSECCalcTypeType                 calcType;                 //���㷽ʽ
    DFITCSECLvelType                     level;                    //����
};

//FASL-�ͻ���������Ϣ����
struct APISTRUCT DFITCFASLReqAbleFinInfoField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECSourceContractType           sourceContract;           //��Լ��Դ(N) 1-��ͨ��Լ 2-ר���Լ
};

//FASL-�ͻ���������Ϣ��Ӧ
struct APISTRUCT DFITCFASLRspAbleFinInfoField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECSourceContractType           sourceContract;           //��Լ��Դ 1-��ͨ��Լ 2-ר���Լ
	DFITCSECContractNOType               contractNO;               //ͷ����
	DFITCSECPositionSizeType             positionSize;             //ͷ���ģ
	DFITCSECFundsType                    meltOutFunds;             //���ڳ����
	DFITCSECFundsType                    subscribeFunds;           //ԤԼ���
	DFITCSECFundsType                    meltOutFreezeFunds;       //�����ڳ�������
	DFITCSECFundsType                    repayFunds;               //���ճ������
	DFITCSECFundsType                    temFreezeFunds;           //��ʱ������
	DFITCSECFundsType                    availableFunds;           //���ý��
};

//STOCK-����������Ϣ��ѯ����
struct APISTRUCT DFITCReqQuotQryField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
};

//STOCK-����������Ϣ��ѯ��Ӧ
struct APISTRUCT DFITCRspQuotQryField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
};

//FASL-�ͻ�����ȯ��Ϣ����
struct APISTRUCT DFITCFASLReqAbleSloInfoField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(N)
	DFITCSECSecurityIDType               securityID;               //֤������(N)
	DFITCSECEntrustQryFlagType           entrustQryFlag;           //��ѯ��־(N)
};

//FASL-�ͻ�����ȯ��Ϣ��Ӧ
struct APISTRUCT DFITCFASLRspAbleSloInfoField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECSecurityIDType               securityID;               //֤������
	DFITCSECExchangeIDType               exchangeID;               //����������
	DFITCSECQuantityType                 ableSloQty;               //��������
	DFITCSECSecurityNameType             securityName;             //֤ȯ����
	DFITCSECQuantityType                 sellEntrustQty;           //����ί������
	DFITCSECQuantityType                 tradeQty;                 //���ճɽ�����
	DFITCSECFundsType                    sloDepositRatio;          //��ȯ����
	DFITCSECQuantityType                 securityQty;              //֤ȯ����
	DFITCSECStockTradeFlagType           stockTradeStatus;         //����״̬
	DFITCSECSourceContractType           sourceContract;           //��Լ��Դ 0-��ͨ��Լ 1-ר���Լ
	DFITCSECQuantityType                 freezeQty;                //��������
	DFITCSECQuantityType                 repayQty;                 //���ճ�������
	DFITCSECQuantityType                 meltOutQty;               //���ڳ�����
	DFITCSECQuantityType                 subscribeQty;             //ԤԼ����
	DFITCSECQuantityType                 rowIndex;                 //��ҳ����ֵ
	DFITCSECFundsType                    exchangRate;              //������
	DFITCSECQuantityType                 drawOutRepayQty;          //������������
};

//FASL-�����ﻮת����
struct APISTRUCT DFITCFASLReqTransferCollateralField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECSecurityIDType               securityID;               //֤������(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //�������(Y)
	DFITCSECQuantityType                 transferQty;              //ί������(Y)
	DFITCSECStockOrderCategoryType		 orderCategory;			   //�������(Y)
	DFITCSECOrderTypeType                orderType;                //��������(Y)
	DFITCSECOrderTradeLimitType			 orderTradeLimit;		   //�������׿���(N)
	DFITCSECOrderExpiryDateType			 orderExpiryDate;		   //����ʱЧ����(N)
	DFITCSECOrderEffectiveDateType		 orderEffectiveDate;	   //������Ч����(N)
	DFITCSECStopLossLimitPriceType		 stopLossLimitPrice;	   //ֹ���޼�(N)
	DFITCSECSerialIDType                 serialID;                 //��չ��ˮ��(N)(Ԥ���ֶ�)
	DFITCSECTDevIDType                   devID;                    //����ID(N)
	DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N)
	DFITCSECStepType					 step;					   //����step��(N)
	DFITCSECShareholderIDType            offerShareholderID;       //�Է��ɶ���(N)
	DFITCSECSeatIDType                   eachSeatID;               //�Է�ϯλ��(N)
};

//FASL-�����ﻮת��Ӧ
struct APISTRUCT DFITCFASLRspTransferCollateralField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
	DFITCSECTimeType                     entrustTime;              //ί��ʱ��
	DFITCSECMessageType                  entrustMsg;               //ί�з�����Ϣ
};

//FASL-ֱ�ӻ�������
struct APISTRUCT DFITCFASLReqDirectRepaymentField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECFundsType                    repayFunds;               //������(Y)
	DFITCSECEntrustTypeType              entrustType;              //ί�з�ʽ(Y)
	DFITCSECStockOrderCategoryType		 orderCategory;			   //�������(Y)
	DFITCSECOrderTypeType                orderType;                //��������(Y)
	DFITCSECOrderTradeLimitType			 orderTradeLimit;		   //�������׿���(N)
	DFITCSECOrderExpiryDateType			 orderExpiryDate;		   //����ʱЧ����(N)
	DFITCSECOrderEffectiveDateType		 orderEffectiveDate;	   //������Ч����(N)
	DFITCSECSerialIDType                 serialID;                 //��չ��ˮ��(N)(Ԥ���ֶ�)
	DFITCSECTDevIDType                   devID;                    //����ID(N)
	DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N)
	DFITCSECStepType					 step;					   //����step��(N)
	DFITCSECSourceContractType           sourceContract;           //��Լ��Դ(N) 0-��ͨ��Լ 1-ר���Լ
	DFITCSECContractNOType               contractNO;               //��Լ���(N)��ָ��������ծ��ˮ�ŷ�Χ��
	DFITCSECEntrustQryFlagType           entrustQryFlag;           //��ѯ��־(N) ��������: 0-���˽᷽ʽ) 1-ֻ����Ϣ����ʱ����Ч��
};

//FASL-ֱ�ӻ�����Ӧ
struct APISTRUCT DFITCFASLRspDirectRepaymentField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECFundsType                    realRepayFunds;           //ʵ�ʻ�����
	DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
	DFITCSECTimeType                     entrustTime;              //ί��ʱ��
};

//FASL-��ȯ��ת����
struct APISTRUCT DFITCFASLReqRepayStockTransferField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECSecurityIDType               securityID;               //֤������(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //�������(Y)
	DFITCSECQuantityType                 repayQty;                 //ί������(Y)
	DFITCSECStockOrderCategoryType		 orderCategory;			   //�������(Y)
	DFITCSECOrderTypeType                orderType;                //��������(Y)
	DFITCSECOrderTradeLimitType			 orderTradeLimit;		   //�������׿���(N)
	DFITCSECOrderExpiryDateType			 orderExpiryDate;		   //����ʱЧ����(N)
	DFITCSECOrderEffectiveDateType		 orderEffectiveDate;	   //������Ч����(N)
	DFITCSECStopLossLimitPriceType		 stopLossLimitPrice;	   //ֹ���޼�(N)
	DFITCSECSerialIDType                 serialID;                 //��չ��ˮ��(N)(Ԥ���ֶ�)
	DFITCSECTDevIDType                   devID;                    //����ID(N)
	DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N)
	DFITCSECStepType					 step;					   //����step��(N)
	DFITCSECEntrustQryFlagType           entrustQryFlag;           //��ѯ��־(N) ���������־����ȯ��תҵ��ר�ã� 0����ʵʱӰ�츺ծ 1����ʵʱӰ�츺ծ -1����û�����볷�������־��ί��
	DFITCSECSourceContractType           sourceContract;           //��Լ��Դ(N) 0-��ͨ��Լ 1-ר���Լ
	DFITCSECContractNOType               contractNO;               //��Լ���(N)����ȯ��ת��ָ����Լ��ţ�
};

//FASL-��ȯ��ת��Ӧ
struct APISTRUCT DFITCFASLRspRepayStockTransferField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECSpdOrderIDType               spdOrderID;                //��̨ί�к�
    DFITCSECLocalOrderIDType             localOrderID;              //����ί�к�
	DFITCSECTimeType                     entrustTime;               //ί��ʱ��
};

//FASL-���ý�������
struct APISTRUCT DFITCFASLReqEntrustCrdtOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECSecurityIDType               securityID;               //֤������(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //�������(Y)
	DFITCSECQuantityType                 entrustQty;               //ί������(Y)
	DFITCSECPriceType                    entrustPrice;             //ί�м۸�(Y)
	DFITCSECStockOrderCategoryType		 orderCategory;			   //�������(Y)
	DFITCSECOrderTypeType                orderType;                //��������(Y)
	DFITCSECEntrustTypeType              entrustType;              //ί�з�ʽ(Y)
	DFITCSECOrderTradeLimitType			 orderTradeLimit;		   //�������׿���(N)
	DFITCSECOrderExpiryDateType			 orderExpiryDate;		   //����ʱЧ����(N)
	DFITCSECOrderEffectiveDateType		 orderEffectiveDate;	   //������Ч����(N)
	DFITCSECStopLossLimitPriceType		 stopLossLimitPrice;	   //ֹ���޼�(N)
	DFITCSECTrusteeshipUnitType          trusteeshipUnit;          //�йܵ�Ԫ
	DFITCSECSerialIDType                 serialID;                 //��չ��ˮ��(N)(Ԥ���ֶ�)
	DFITCSECTDevIDType                   devID;                    //����ID(N)
	DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N)
	DFITCSECStepType					 step;					   //����step��(N)
	DFITCSECSourceContractType           sourceContract;           //��Լ��Դ(N) 0-���� 1-��ͨ 2-ר��
	DFITCSECContractNOType               contractNO;               //��Լ���(N)��ָ��������ծ��ˮ�ŷ�Χ��
	DFITCSECEntrustQryFlagType           entrustQryFlag;           //��ѯ��־(N) ��������: 0-���˽᷽ʽ) 1-ֻ����Ϣ����ʱ����Ч��
	DFITCSECSpecialSignsType             specialSigns;             //�����־(N)��0-��Ч��Ĭ�ϣ� 1-��ȯ����Ա���𣬿ͻ�����������
    DFITCSECDividendsPatternType		 dividendsPattern;		   //�ֺ췽ʽ(N)
};

//FASL-���ý�����Ӧ
struct APISTRUCT DFITCFASLRspEntrustCrdtOrderField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECSpdOrderIDType               spdOrderID;                //��̨ί�к�
    DFITCSECLocalOrderIDType             localOrderID;              //����ί�к�
	DFITCSECTimeType                     entrustTime;               //ί��ʱ��
	DFITCSECFundsType                    freezeFunds;               //�����ʽ�
};


//FASL-��������
struct APISTRUCT DFITCFASLReqWithdrawOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�(N)
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(N)(��̨ί�кźͱ���ί�кŶ�ѡһ)
    DFITCSECSessionIDType                sessionID;                //�Ự���(N)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //�������(Y)
	DFITCSECSerialIDType                 serialID;                 //��չ��ˮ��(N)(Ԥ���ֶ�)
	DFITCSECTDevIDType                   devID;                    //����ID(N)
	DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N)
};

//FASL-������Ӧ
struct APISTRUCT DFITCFASLRspWithdrawOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECTimeType                     entrustTime;              //ί��ʱ��
};

//FASL-������ȯ��������
struct APISTRUCT DFITCFASLReqEntrustOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECSecurityIDType               securityID;               //֤������(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //�������(Y)
	DFITCSECQuantityType                 entrustQty;               //ί������(Y)
	DFITCSECPriceType                    entrustPrice;             //ί�м۸�(Y)
	DFITCSECStockOrderCategoryType		 orderCategory;			   //�������(Y)
	DFITCSECOrderTypeType                orderType;                //��������(Y)
	DFITCSECOrderTradeLimitType			 orderTradeLimit;		   //�������׿���(N)
	DFITCSECOrderExpiryDateType			 orderExpiryDate;		   //����ʱЧ����(N)
	DFITCSECOrderEffectiveDateType		 orderEffectiveDate;	   //������Ч����(N)
	DFITCSECStopLossLimitPriceType		 stopLossLimitPrice;	   //ֹ���޼�(N)
	DFITCSECTrusteeshipUnitType          trusteeshipUnit;          //�йܵ�Ԫ
	DFITCSECSerialIDType                 serialID;                 //��չ��ˮ��(N)(Ԥ���ֶ�)
	DFITCSECTDevIDType                   devID;                    //����ID(N)
	DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N)
	DFITCSECStepType					 step;					   //����step��(N)
	DFITCSECSourceContractType           sourceContract;           //��Լ��Դ(N) 0-��ͨ��Լ 1-ר���Լ
};

//FASL-������ȯ������Ӧ
struct APISTRUCT DFITCFASLRspEntrustOrderField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECLocalOrderIDType             localOrderID;              //����ί�к�
    DFITCSECSpdOrderIDType               spdOrderID;                //��̨ί�к�
    DFITCSECTimeType                     entrustTime;               //ί��ʱ��
	DFITCSECFundsType                    freezeFunds;               //�����ʽ�
    DFITCSECContractNOType               contractNO;                //ָ����Լ���
};

//FASL-���ÿ�ί��������ѯ����
struct APISTRUCT DFITCFASLReqCalcAbleEntrustCrdtQtyField
{
	DFITCSECRequestIDType                requestID;                 //����ID(Y)
	DFITCSECAccountIDType                accountID;                 //�ͻ���(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECSecurityIDType               securityID;               //֤������(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //�������(Y)
	DFITCSECPriceType                    entrustPrice;             //ί�м۸�(Y)
	DFITCSECOrderTypeType                orderType;                //��������(Y)
	DFITCSECEntrustTypeType              entrustType;              //ί�з�ʽ(Y)
	DFITCSECTrusteeshipUnitType          trusteeshipUnit;          //�йܵ�Ԫ
	DFITCSECSourceContractType           sourceContract;           //��Լ��Դ(N) 0-���� 1-��ͨ 2-ר��
	DFITCSECContractNOType               contractNO;               //��Լ���(N)��ָ��������ծ��ˮ�ŷ�Χ��
};

//FASL-���ÿ�ί��������ѯ��Ӧ
struct APISTRUCT DFITCFASLRspCalcAbleEntrustCrdtQtyField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECQuantityType                 totalRepayQty;             //��Ӧ������
    DFITCSECQuantityType                 entrustQty;                //ί������
};

//FASL-��ѯ�����ʽ�����
struct APISTRUCT DFITCFASLReqQryCrdtFundsField
{
    DFITCSECRequestIDType                requestID;                 //����ID(Y)
    DFITCSECAccountIDType                accountID;                 //�ͻ���(Y)
	DFITCSECFundsQryFlagType             fundsQryFlag;              //��ѯ��־(N)
	DFITCSECSystemQryFlagType            flag;                      //���ҵ����ñ�־�����Ϊ��ܵ��ñ�־�����Ƿ���Ҫ��ͬ�ɲ�������(N)
};

//FASL-��ѯ�����ʽ���Ӧ
struct APISTRUCT DFITCFASLRspQryCrdtFundsField
{
    DFITCSECRequestIDType                requestID;                 //����ID
    DFITCSECAccountIDType                accountID;                 //�ͻ���
    DFITCSECFundsType                    availableDeposit;          //���ñ�֤��
    DFITCSECFundsType                    maintGuaranteeRatio;       //ά�ֵ�������
    DFITCSECFundsType                    antiMaintGuaranteeRatio;   //Ԥ��ά�ֵ�������
    DFITCSECFundsType                    accountBanlance;           //�˻����
    DFITCSECFundsType                    availableFunds;            //�����ʽ�
    DFITCSECFundsType                    clearFunds;                //�����ʽ�
    DFITCSECFundsType                    stockMarket;               //֤ȯ��ֵ
    DFITCSECFundsType                    guaranteeStockSubMarket;   //���쵣��֤ȯ�ύ��ֵ
    DFITCSECFundsType                    guaranteeStockMarket;      //����֤ȯ��ֵ
    DFITCSECFundsType                    tradeFinLiabilities;       //���ʸ�ծ(�ѳɽ�)
    DFITCSECFundsType                    tradeSloLiabilities;       //��ȯ��ծ(�ѳɽ�)
    DFITCSECFundsType                    orderFinLiabilities;       //���ʸ�ծ(δ�ɽ�)
    DFITCSECFundsType                    orderSloLiabilities;       //��ȯ��ծ(δ�ɽ�)
    DFITCSECFundsType                    sloOrderRepay;             //��ȯ�黹(δ�ɽ�)
    DFITCSECFundsType                    fundsBalance;              //�ʽ���
    DFITCSECFundsType                    closeFunds;                //ƽ�ֽ��
    DFITCSECFundsType                    activeCloseFunds;          //����ƽ�ֽ��
    DFITCSECFundsType                    ableWithdrawalAssetsStand; //�����ʲ���׼
    DFITCSECFundsType                    totalAssets;               //���ʲ�
    DFITCSECFundsType                    totalLiabilities;          //�ܸ�ծ
    DFITCSECFundsType                    netAssets;                 //���ʲ�
    DFITCSECFundsType                    anticipatedInterest;       //Ԥ����Ϣ/����
    DFITCSECFundsType                    finProfitLoss;             //����ӯ��
    DFITCSECFundsType                    sloProfitLoss;             //��ȯӯ��
    DFITCSECFundsType                    sloFunds;                  //��ȯ���
    DFITCSECFundsType                    finCost;                   //���ʷ���
    DFITCSECFundsType                    sloCost;                   //��ȯ����
    DFITCSECFundsType                    finUsedDeposit;            //����ռ�ñ�֤��
    DFITCSECFundsType                    sloUsedDeposit;            //��ȯռ�ñ�֤��
    DFITCSECFundsType                    finAntiInterest;           //����Ԥ����Ϣ
    DFITCSECFundsType                    sloAntiInterest;           //��ȯԤ����Ϣ
    DFITCSECDateType                     contractEndDate;           //��ͬ������
    DFITCSECFundsType                    finUsedLimits;             //�������ö��
    DFITCSECFundsType                    sloUsedLimits;             //��ȯ���ö��
    DFITCSECFundsType                    finCreditLimits;           //�������Ŷ��
    DFITCSECFundsType                    sloCreditLimits;           //��ȯ���Ŷ��
    DFITCSECFundsType                    ableBuyCollateralFunds;    //���򵣱�Ʒ�ʽ�
    DFITCSECFundsType                    sloAvailableFunds;         //��ȯ�����ʽ�
    DFITCSECFundsType                    cashAssets;                //�ֽ��ʲ�(�����ʲ���������ȯ����)
    DFITCSECFundsType                    finContractFunds;          //���ʺ�Լ���(����������)
    DFITCSECFundsType                    contractObjectMarket;      //���֤ȯ��ֵ
    DFITCSECFundsType                    otherCharges;              //��������
};

//FASL-���ú�Լ��Ϣ����
struct APISTRUCT DFITCFASLReqQryCrdtContractField
{
	DFITCSECRequestIDType                requestID;                 //����ID(Y)
	DFITCSECAccountIDType                accountID;                 //�ͻ���(Y)
	DFITCSECExchangeIDType               exchangeID;                //����������(N)
	DFITCSECContractNOType               contractNO;                //ָ����Լ���(N)
	DFITCSECSecurityIDType               securityID;                //֤������(N)
	DFITCSECQuantityType                 rowIndex;                  //��ҳ����ֵ(N)
	DFITCSECQuantityType                 rowCount;                  //ÿҳ��ѯ����(N)
};

//FASL-���ú�Լ��Ϣ��Ӧ
struct APISTRUCT DFITCFASLRspQryCrdtContractField
{
	DFITCSECRequestIDType                requestID;                 //����ID
	DFITCSECAccountIDType                accountID;                 //�ͻ���
	DFITCSECContractNOType               specifycontractNO;         //ԭ��Լ���
	DFITCSECDateType                     operatorDate;              //��������
	DFITCSECDateType                     endDate;                   //��������
	DFITCSECSpdOrderIDType               spdOrderID;                //��̨ί�к�
	DFITCSECExchangeIDType               exchangeID;                //����������
	DFITCSECSecurityIDType               securityID;                //֤������
	DFITCSECSecurityNameType             securityName;              //֤ȯ����
	DFITCSECFundsType                    repaidInterest;            //�ѳ�����Ϣ
	DFITCSECCrdtContractStatusType       crdtConStatus;             //��鸺ծ�˽�״̬ 0-δ�˽�  1-���˽�
	DFITCSECQuantityType                 entrustQty;                //ί������
	DFITCSECQuantityType                 conInitQty;                //�ڳ�����
	DFITCSECFundsType                    conInitFunds;              //�ڳ����
	DFITCSECFundsType                    conInitCost;               //�ڳ�������
	DFITCSECContractNOType               contractNO3;               //ͷ����
	DFITCSECSourceContractType           sourceContract;            //��Լ��Դ/��Լ���� 0-��ͨ��Լ 1-ר���Լ
	DFITCSECContractNOType               contractNO;                //��ͬ���
	DFITCSECContractNOType               contractNO2;               //��Լ���
	DFITCSECTimeType                     operatorTime;              //����ʱ��
	DFITCSECDateType                     tradingDate;               //��������
	DFITCSECDateType                     timeLimit;                 //����
	DFITCSECDateType                     dueDate;                   //��Ϣ����
	DFITCSECFundsType                    realtimeFunds;             //ʵʱ���
	DFITCSECContractNOType               contractNOIndex;           //��ͬ�������
	DFITCSECShareholderIDType            shareholderID;             //�ɶ���
	DFITCSECContractTypeType             contractType;              //��Լ���
	DFITCSECPriceType                    entrustPrice;              //ί�м۸�
	DFITCSECQuantityType                 tradeQty;                  //�ɽ�����
	DFITCSECFundsType                    turnover;                  //�ɽ����
	DFITCSECPriceType                    tradePrice;                //�ɽ��۸�
	DFITCSECFundsType                    conCost;                   //������
	DFITCSECFundsType                    repayFunds;                //�ѳ������
	DFITCSECFundsType                    repayCost;                 //�ѳ���������
	DFITCSECFundsType                    repayPenaltyInterest;      //�ѳ�����Ϣ
	DFITCSECQuantityType                 repayQty;                  //�ѳ�������   
	DFITCSECFundsType                    conInitInterest;           //�ڳ���Ϣ
	DFITCSECFundsType                    conInitPenaltyInterest;    //�ڳ���Ϣ  
	DFITCSECFundsType                    realtimeConCost;           //ʵʱ������
	DFITCSECFundsType                    realtimeInterest;          //ʵʱ��Ϣ
	DFITCSECFundsType                    realtimePenaltyInterest;   //ʵʱ��Ϣ
	DFITCSECQuantityType                 realtimeQty;               //ʵʱ���� 
	DFITCSECFundsType                    ratio;                     //��Լ����
	DFITCSECFundsType                    penaltyInterestRatio;      //��Ϣ����
	DFITCSECFundsType                    interestBase;              //��Ϣ����
	DFITCSECFundsType                    segmentInterest;           //�ֶ���Ϣ
	DFITCSECFundsType                    anticipatedInterest;       //Ԥ����Ϣ
	DFITCSECFundsType                    penaltyInterestBase;       //��Ϣ��Ϣ����
	DFITCSECFundsType                    anticipatedPenaltyInterest;//��ϢԤ����Ϣ
	DFITCSECFundsType                    depositRatio;              //��֤�����
	DFITCSECExhibitionTimesType          exhibitionTimes;           //չ�ڴ���
	DFITCSECTradeStatusType              usedLimitsFreezeFlag;      //��ȶ����ʶ
	DFITCSECQuantityType                 compensateQty;             //��������
	DFITCSECFundsType                    compensateFunds;           //�������
	DFITCSECInterestSettlementMethodType  interestSettlementMethod;  //��Ϣ�˽᷽ʽ
	DFITCSECArrearsFlagFlagType           arrearsFlag;               //Ƿ���־
	DFITCSECOutstandingSecuritiesFlagType outstandingSecuritiesFlag; //Ƿȯ��־
};

//FASL-���ú�Լ�䶯��Ϣ��ѯ����
struct APISTRUCT DFITCFASLReqQryCrdtConChangeInfoField
{
    DFITCSECRequestIDType                requestID;                 //����ID(Y)
    DFITCSECAccountIDType                accountID;                 //�ͻ���(Y)
    DFITCSECWithdrawFlagType             withdrawFlag;              //������־(N)
    DFITCSECEntrustDirectionType         entrustDirection;          //ί�����(N)
    DFITCSECExchangeIDType               exchangeID;                //����������(N)
    DFITCSECSecurityIDType               securityID;                //֤������(N)
	DFITCSECContractNOType               contractNO;                //��Լ���(N)
    DFITCSECSerialIDType                 conSerialNO;               //��Լ��ˮ��(N)
};

//FASL-���ú�Լ�䶯��Ϣ��ѯ��Ӧ
struct APISTRUCT DFITCFASLRspQryCrdtConChangeInfoField
{
	DFITCSECRequestIDType                requestID;                 //����ID
	DFITCSECAccountIDType                accountID;                 //�ͻ���
	DFITCSECSerialIDType                 serialNO;                  //��Լ��ˮ��
	DFITCSECContractNOType               conChangeNO;               //��Լ�䶯���
	DFITCSECWithdrawFlagType             withdrawFlag;              //������־(Ԥ���ֶ�)
	DFITCSECSerialIDType                 rtnSerialID;               //�ر����
	DFITCSECSecurityIDType               securityID;                //֤������
	DFITCSECEntrustDirectionType         entrustDirection;          //ί�����
	DFITCSECFundsType                    operatorFunds;             //������Լ���
	DFITCSECTimeType                     operatorTime;              //����ʱ��
	DFITCSECQuantityType                 operatorQty;               //��������
	DFITCSECDateType                     operatorDate;              //��������
	DFITCSECDateType                     tradeDate;                 //��������
	DFITCSECChangeTypeType               changeType;                //��Լ�䶯���
	DFITCSECContractTypeType             contractType;              //��Լ���
	DFITCSECClearFlagType                clearFlag;                 //�����־
	DFITCSECFundsType                    postContractFunds;         //�����Լ���
	DFITCSECExchangeIDType               exchangeID;                //����������
	DFITCSECMessageType                  changeNote;                //�䶯˵��
	DFITCSECContractNOType               contractNO;                //ͷ����
	DFITCSECSpdOrderIDType               spdOrderID;                //ί�к�
	DFITCSECExchangeIDType               contractExchangeID;        //��Լ����������
	DFITCSECSecurityIDType               contractSecurityID;        //��Լ֤������
	DFITCSECQuantityType                 postConQty;                //�����Լ����
	DFITCSECFundsType                    operatorInterest;          //������Ϣ
	DFITCSECFundsType                    postInterest;              //������Ϣ
	DFITCSECFundsType                    operatorPenaltyInterest;   //������Ϣ
	DFITCSECFundsType                    postPenaltyInterest;       //���෣Ϣ
	DFITCSECDesignatedRepaymentFlagType  designatedRepaymentFlag;   //ָ��������־
	DFITCSECForceClosePositionFlagType   forceClosePositionFlag;    //ǿƽ��־
};

//FASL-��ѯϵͳʱ������
struct APISTRUCT DFITCFASLReqQryTradeTimeField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSystemQryFlagType            flag;                     //�߾��ȷ��ر�־(N)
};

//FASL-��ѯϵͳʱ����Ӧ
struct APISTRUCT DFITCFASLRspQryTradeTimeField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECDateType                     sysTradingDay;            //ϵͳ��ǰ����
    DFITCSECTimeType                     sysTime;                  //ϵͳ��ǰʱ��
    DFITCSECWeekType                     sysWeek;                  //ϵͳ��ǰ����(flagΪ1ʱ�ŷ���)
    DFITCSECMillisecondType              sysMillisecond;           //ϵͳ��ǰ����(flagΪ1ʱ�ŷ���)
};

//FASL-��ת�뵣��֤ȯ��ѯ
struct APISTRUCT DFITCFASLReqQryTransferredContractField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECSecurityIDType               securityID;               //֤ȯ����(N)
    DFITCSECExchangeIDType               exchangeID;               //����������(N)
};

//FASL-��ת�뵣��֤ȯ��ѯ��Ӧ
struct APISTRUCT DFITCFASLRspQryTransferredContractField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECAccountIDType                capitalID;                //�ʽ��˺�
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECQuantityType                 ableSellQty;              //������(ת��)����
};

//FASL-�ͻ���ȡ�ʽ��������
struct APISTRUCT DFITCFASLReqDesirableFundsOutField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECCurrencyType                 currency;                 //����(Y)
    DFITCSECFundsType                    operateFunds;             //�������(Y)
    DFITCSECMessageType                  summaryMsg;               //ժҪ(N)
};

//FASL-�ͻ���ȡ�ʽ������Ӧ
struct APISTRUCT DFITCFASLRspDesirableFundsOutField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECSerialIDType                 serialID;                 //��ˮ��
    DFITCSECFundsType                    accountBanlance;          //�˻����
	DFITCSECFundsType                    availableFunds;           //�����ʽ�
};

//FASL-����֤ȯ��ѯ
struct APISTRUCT DFITCFASLReqQryGuaranteedContractField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(N)
	DFITCSECSecurityIDType               securityID;               //֤ȯ����(N)
};

//FASL-����֤ȯ��ѯ��Ӧ
struct APISTRUCT DFITCFASLRspQryGuaranteedContractField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECFundsType                    exchangRate;              //������
    DFITCSECTradeStatusType              status;                   //״̬
    DFITCSECAccountType                  accountType;              //����
};

//FASL-���֤ȯ��ѯ
struct APISTRUCT DFITCFASLReqQryUnderlyingContractField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(N)
	DFITCSECSecurityIDType               securityID;               //֤ȯ����(N)
	DFITCSECQuantityType                 rowIndex;                 //��ҳ����ֵ(N)
	DFITCSECQuantityType                 rowCount;                 //ÿҳ��ѯ����(Ԥ���ֶ�)(N)
};

//FASL-���֤ȯ��ѯ��Ӧ
struct APISTRUCT DFITCFASLRspQryUnderlyingContractField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECExchangeIDType               exchangeID;               //����������
	DFITCSECSecurityIDType               securityID;               //֤ȯ����
	DFITCSECSecurityNameType             securityName;             //֤ȯ����
	DFITCSECTradeStatusType              status;                   //����״̬
	DFITCSECSecurityPropType             securityProp;             //֤ȯ����
	DFITCSECOtherPropType                otherProp;                //��������
	DFITCSECFundsType                    exchangRate;              //��׼������
	DFITCSECFundsType                    financeDepositRatio;      //���ʱ�֤�����
	DFITCSECFundsType                    securityDepositRatio;     //��ȯ��֤�����
	DFITCSECExhibitionTimesType          exhibitionTimes;          //չ�ڴ���
	DFITCSECFundsType                    marketFinanceBalance;     //�г��������
	DFITCSECFundsType                    marketSecurityBalance;    //�г���ȯ���
	DFITCSECQuantityType                 marketFinanceQty;         //�г���������
	DFITCSECQuantityType                 marketSecurityQty;        //�г���ȯ����
	DFITCSECFundsType                    exchangeFinanceRatio;     //���������ʱ���
	DFITCSECFundsType                    exchangeSecurityRatio;    //��������ȯ����
	DFITCSECFundsType                    exchangeexchangRate;      //������������
	DFITCSECTradeStatusType              outStatus;                //�ⲿ״̬
	DFITCSECDateType                     registerDate;             //�Ǽ�����
	DFITCSECDateType                     modifyDate;               //�޸�����
	DFITCSECCheckFairPriceFlagType       checkFairPriceFlag;       //�Ƿ����ù��ʼ۸�
	DFITCSECPriceType                    fairPrice;                //���ʼ۸�
	DFITCSECStockSectorType              stockSector;              //��Ʊ���
	DFITCSECTradeStatusType              financeStatus;            //����״̬
	DFITCSECTradeStatusType              securityStatus;           //��ȯ״̬
	DFITCSECTradeStatusType              guaranteeStatus;          //����״̬
};

//FASL-ί�в�ѯ����
struct APISTRUCT DFITCFASLReqQryEntrustOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(N)
	DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�(N)
	DFITCSECExchangeIDType               exchangeID;               //����������(N)
	DFITCSECAccountIDType                capitalID;                //�ʽ��˺�(N)
	DFITCSECSecurityIDType               securityID;               //֤������(N)
	DFITCSECEntrustDirectionType         entrustDirection;         //�������(N)
	DFITCSECWithdrawFlagType             withdrawFlag;             //������־(N)
	DFITCSECOrderCategoryType            orderCategory;            //ί�е����(N) 0.��ͨί��,1.����ί��
	DFITCSECSerialIDType                 serialID;                 //��ˮ��(N)
	DFITCSECTDevIDType                   devID;                    //����ID(N)
	DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N)
	DFITCSECEntrustQryFlagType           entrustQryFlag;           //��ѯ��־(N) //�Ƿ��ѯ�ɳ���ί��
	DFITCSECQuantityType                 rowIndex;                 //��ҳ����ֵ(N)
	DFITCSECQuantityType                 rowCount;                 //ÿҳ��ѯ����(N)
};

//FASL-ί�в�ѯ��Ӧ
struct APISTRUCT DFITCFASLRspQryEntrustOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECShareholderIDType            offerShareholderID;       //���̹ɶ���
	DFITCSECCurrencyType                 currency;                 //����
	DFITCSECFundsType                    turnover;                 //�ɽ����
	DFITCSECPriceType                    tradePrice;               //�ɽ��۸�
	DFITCSECTimeType                     tradeTime;                //�ɽ�ʱ��
	DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
	DFITCSECShareholderIDType            shareholderID;            //�ɶ���
	DFITCSECExchangeIDType               exchangeID;               //����������
	DFITCSECFundsType                    clearFunds;               //�����ʽ�
	DFITCSECEntrustTypeType              entrustType;              //ί�з�ʽ
	DFITCSECSpdOrderIDType               spdOrderID;               //ί�к�
	DFITCSECPriceType                    entrustPrice;             //ί�м۸�
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
	DFITCSECQuantityType                 entrustQty;               //ί������
	DFITCSECSecurityIDType               securityID;               //֤������
	DFITCSECSecurityTypeType             securityType;             //֤ȯ���
	DFITCSECSecurityNameType             securityName;             //֤ȯ����
	DFITCSECTimeType                     entrustTime;              //ί��ʱ��
	DFITCSECTimeType                     declareTime;              //�걨ʱ��
	DFITCSECDeclareResultType            declareResult;            //�걨���
	DFITCSECWithdrawFlagType             withdrawFlag;             //������־
	DFITCSECFundsType                    freezeFunds;              //�����ʽ�
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECMessageType                  noteMsg;                  //���˵��
	DFITCSECQuantityType                 withdrawQty;              //��������
	DFITCSECDeclareOrderIDType           declareOrderID;           //�걨ί�к�
	DFITCSECOrderTypeType                orderType;                //��������
	DFITCSECSerialIDType                 freezeFundsSerialID;      //�ʽ𶳽���ˮ��
	DFITCSECSerialIDType                 freezeStockSerialID;      //֤ȯ������ˮ��
	DFITCSECDateType                     declareDate;              //�걨����
	DFITCSECSerialIDType                 declareSerialID;          //�걨��¼��
	DFITCSECDateType                     entrustDate;              //ί������
	DFITCSECIncQryIndexType              incQryIndex;              //������ѯ����ֵ
};

//FASL-ʵʱ�ɽ���ѯ����
struct APISTRUCT DFITCFASLReqQryRealTimeTradeField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(N)
	DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�(N)
	DFITCSECExchangeIDType               exchangeID;               //����������(N)
	DFITCSECAccountIDType                capitalID;                //�ʽ��˺�(N)
	DFITCSECSecurityIDType               securityID;               //֤������(N)
	DFITCSECEntrustDirectionType         entrustDirection;         //�������(N)
	DFITCSECOrderCategoryType            orderCategory;            //ί�е����(N) 0.��ͨί��,1.����ί��
	DFITCSECSerialIDType                 serialID;                 //��ˮ��(N)
	DFITCSECEntrustQryFlagType           entrustQryFlag;           //��ѯ��־(N) //�Ƿ��ѯ�ɳ���ί��
	DFITCSECQuantityType                 rowIndex;                 //��ҳ����ֵ(N)
	DFITCSECQuantityType                 rowCount;                 //ÿҳ��ѯ����(N)
};

//FASL-ʵʱ�ɽ���ѯ��Ӧ
struct APISTRUCT DFITCFASLRspQryRealTimeTradeField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
	DFITCSECDeclareOrderIDType           declareOrderID;           //�걨ί�к�
	DFITCSECExchangeIDType               exchangeID;               //����������
	DFITCSECShareholderIDType            shareholderID;            //�ɶ���
	DFITCSECWithdrawFlagType             withdrawFlag;             //������־
	DFITCSECSecurityIDType               securityID;               //֤ȯ����
	DFITCSECSecurityNameType             securityName;             //֤ȯ����
	DFITCSECQuantityType                 entrustQty;               //ί������
	DFITCSECPriceType                    entrustPrice;             //ί�м۸�
	DFITCSECQuantityType                 withdrawQty;              //��������
	DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
	DFITCSECFundsType                    turnover;                 //�ɽ����
	DFITCSECPriceType                    tradePrice;               //�ɽ��۸�
	DFITCSECTimeType                     tradeTime;                //�ɽ�ʱ��
	DFITCSECCurrencyType                 currency;                 //����
	DFITCSECFundsType                    clearFunds;               //�����ʽ�
	DFITCSECOrderTypeType                orderType;                //��������
};

//FASL-�ֱʳɽ���ѯ����
struct APISTRUCT DFITCFASLReqQrySerialTradeField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(N)
	DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�(N)
	DFITCSECExchangeIDType               exchangeID;               //����������(N)
	DFITCSECAccountIDType                capitalID;                //�ʽ��˺�(N)
	DFITCSECSecurityIDType               securityID;               //֤������(N)
	DFITCSECEntrustDirectionType         entrustDirection;         //�������(N)
	DFITCSECWithdrawFlagType             withdrawFlag;             //������־(N)
	DFITCSECOrderCategoryType            orderCategory;            //ί�е����(N) 0.��ͨί��,1.����ί��
	DFITCSECSerialIDType                 serialID;                 //��ˮ��(N)
	DFITCSECTDevIDType                   devID;                    //����ID(N)
	DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N)
	DFITCSECEntrustQryFlagType           entrustQryFlag;           //��ѯ��־(N) //�Ƿ��ѯ�ɳ���ί��
	DFITCSECQuantityType                 rowIndex;                 //��ҳ����ֵ(N)
	DFITCSECQuantityType                 rowCount;                 //ÿҳ��ѯ����(N)
};

//FASL-�ֱʳɽ���ѯ��Ӧ
struct APISTRUCT DFITCFASLRspQrySerialTradeField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECCurrencyType                 currency;                 //����
	DFITCSECTradeIDType                  tradeID;                  //�ɽ����
	DFITCSECFundsType                    turnover;                 //�ɽ����
	DFITCSECPriceType                    tradePrice;               //�ɽ��۸�
	DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
	DFITCSECShareholderIDType            shareholderID;            //�ɶ���
	DFITCSECExchangeIDType               exchangeID;               //����������
	DFITCSECFundsType                    clearFunds;               //�����ʽ�
	DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
	DFITCSECSecurityIDType               securityID;               //֤ȯ����
	DFITCSECSecurityTypeType             securityType;             //֤�����
	DFITCSECSecurityNameType             securityName;             //֤ȯ����
	DFITCSECWithdrawFlagType             withdrawFlag;             //������־
	DFITCSECFundsType                    commission;               //Ӷ��
	DFITCSECSerialIDType                 rtnSerialID;              //�ر����
	DFITCSECFundsType                    interestQuote;            //��Ϣ����
	DFITCSECDeclareOrderIDType           declareOrderID;           //�걨ί�к�
	DFITCSECIncQryIndexType              incQryIndex;              //������ѯ����ֵ
	DFITCSECFundsType                    interest;                 //��Ϣ
	DFITCSECTimeType                     tradeTime;                //�ɽ�ʱ��
};

//FASL-�ֲֲ�ѯ����
struct APISTRUCT DFITCFASLReqQryPositionField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(N)
	DFITCSECSecurityIDType               securityID;               //֤������(N)
	DFITCSECPositionQryFlagType          posiQryFlag;              //��ѯ��־(N)
	DFITCSECAccountIDType                capitalID;                //�ʽ��˺�(N)
	DFITCSECCirculateTypeType            circulateType;            //��ͨ���ͣ�����Ĭ��ֻ����ͨ��,��0�����ͨ,��1����ͨ,��2��ȫ��
	DFITCSECQuantityType                 rowIndex;                 //��ҳ����ֵ(N)
	DFITCSECQuantityType                 rowCount;                 //ÿҳ��ѯ����(N)
};

//FASL-�ֲֲ�ѯ��Ӧ
struct APISTRUCT DFITCFASLRspQryPositionField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECCurrencyType                 currency;                 //����
	DFITCSECFundsType                    sellTurnover;             //���������ɽ����
	DFITCSECQuantityType                 sellTradeQty;             //���������ɽ�����
	DFITCSECQuantityType                 sellEntrustQty;           //��������ί������
	DFITCSECFundsType                    buyTurnover;              //��������ɽ����
	DFITCSECQuantityType                 buyTradeQty;              //��������ɽ�����
	DFITCSECQuantityType                 buyEntrustQty;            //��������ί������
	DFITCSECQuantityType                 nonCirculateQty;          //����ͨ����
	DFITCSECShareholderIDType            shareholderID;            //�ɶ���
	DFITCSECExchangeIDType               exchangeID;               //������
	DFITCSECDateType                     openDate;                 //��������
	DFITCSECQuantityType                 ableSellQty;              //����������
	DFITCSECSecurityIDType               securityID;               //֤ȯ����
	DFITCSECSecurityTypeType             securityType;             //֤ȯ���
	DFITCSECSecurityNameType             securityName;             //֤ȯ����
	DFITCSECQuantityType                 securityQty;              //֤ȯ����
	DFITCSECQuantityType                 position;                 //��ֲ���
	DFITCSECQuantityType                 unSettleQty;              //δ��������
	DFITCSECDateType                     changeDate;               //�䶯����
	DFITCSECQuantityType                 ablePurchaseQty;          //���깺����
	DFITCSECQuantityType                 ableRedemptionQty;        //���������
	DFITCSECQuantityType                 freezeQty;                //��������
	DFITCSECQuantityType                 offsetSQty;               //������������
	DFITCSECQuantityType                 offsetBQty;               //�����������
	DFITCSECQuantityType                 purchaseTradeQty;         //�깺�ɽ�����
	DFITCSECQuantityType                 redemptionTradeQty;       //��سɽ�����
	DFITCSECTradeUnitType                tradeUnit;                //���׵�λ(N)
	DFITCSECQuantityType                 totalSellQty;             //�ۼ���������(N)
	DFITCSECQuantityType                 totalBuyQty;              //�ۼ���������(N)
	DFITCSECQuantityType                 rationedSharesQty;        //�������(N)
	DFITCSECQuantityType                 purchaseQty;              //�͹�����(N)
	DFITCSECFundsType                    dilutedFloatProfitLoss;   //̯������ӯ��(N)
	DFITCSECPriceType                    dilutedBreakevenPrice;    //̯��������(N)
	DFITCSECPriceType                    dilutedCost;              //̯���ɱ���(N)
	DFITCSECPriceType                    avgPositionPrice;         //�ֲ־���(N)
	DFITCSECFundsType                    floatProfitLoss;          //����ӯ��(N)
	DFITCSECFundsType                    dividend;                 //�������(N)
	DFITCSECFundsType                    totalFloatProfitLoss;     //�ۼƸ���ӯ��(N)
	DFITCSECFundsType                    sellAmount;               //�������(N)
	DFITCSECFundsType                    buyAmount;                //������(N)
	DFITCSECPriceType                    buyAvgPrice;              //�������(N)
	DFITCSECFundsType                    rationedSharesAmount;     //��ɽ��(N)
	DFITCSECFundsType                    latestMarket;             //������ֵ(N)
	DFITCSECPriceType                    breakevenPrice;           //������(N)
	DFITCSECPriceType                    latestPrice;              //���¼�(N)
	DFITCSECFundsType                    nonCirculateMarket;       //����ͨ��ֵ(N)
	DFITCSECFundsType                    interestQuote;            //��Ϣ����(N)
	DFITCSECPriceType                    preClosePrice;            //�����̼�(N)(Ԥ��)
};

//FASL-�ͻ��ʽ��ѯ����
struct APISTRUCT DFITCFASLReqQryCapitalAccountField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECFundsQryFlagType             fundsQryFlag;             //��ѯ��־(N)
	DFITCSECAccountIDType                capitalID;                //�ʽ��˺�(N)
};

//FASL-�ͻ��ʽ��ѯ��Ӧ
struct APISTRUCT DFITCFASLRspQryCapitalAccountField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECCurrencyType                 currency;                 //����
	DFITCSECFundsType                    availableFunds;           //�����ʽ�
	DFITCSECFundsType                    t2AvailableFunds;         //T+2�����ʽ�
	DFITCSECFundsType                    anticipatedInterest;      //Ԥ����Ϣ
	DFITCSECFundsType                    accountBalance;           //�˻����
	DFITCSECAccountStatusType            accountStatus;            //�ʻ�״̬
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECAccountIDType                capitalID;                //�ʽ��˺�
	DFITCSECFundsType                    freezeFunds;              //�����ʽ�
	DFITCSECFundsType                    t2FreezeFunds;            //T+2�����ʽ�
	DFITCSECFundsType                    totalFunds;               //���ʽ�(��ѯ��־Ϊ1ʱ�᷵��ֵ
	DFITCSECFundsType                    totalMarket;              //����ֵ(��ѯ��־Ϊ1ʱ�᷵��ֵ)
};

//FASL-���н����ʽ��ѯ���� 
struct APISTRUCT DFITCFASLReqQryCentreFundAvlField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
};

//FASL-���н����ʽ��ѯ��Ӧ
struct APISTRUCT DFITCFASLRspQryCentreFundAvlField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECAccountIDType                capitalID;                //�ʽ��˺�
	DFITCSECCurrencyType                 currency;                 //����
	DFITCSECFundsType                    accountBalance;           //�˻����
	DFITCSECFundsType                    availableFunds;           //�����ʽ�
	DFITCSECFundsType                    freezeFunds;              //�����ʽ�
	DFITCSECFundsType                    withdrawalFunds;          //��ȡ�ʽ�
	DFITCSECFundsType                    totalAssets;              //���ʲ�
};


//FASL-�ͻ�����Ȩ���ѯ���� 
struct APISTRUCT DFITCFASLReqQryPlacingInterestsField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(N)
};

//FASL-�ͻ�����Ȩ���ѯ��Ӧ
struct APISTRUCT DFITCFASLRspQryPlacingInterestsField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECExchangeIDType               exchangeID;               //����������
	DFITCSECShareholderIDType            shareholderID;            //�ɶ���
	DFITCSECQuantityType                 winningLotsQty;           //��ǩ����
	DFITCSECQuantityType                 satibablePurchaseQty;     //�ƴ�����깺����
	DFITCSECDateType                     clearDate;                //��������
};

//FASL-�ͻ���Ϣ��ѯ����
struct APISTRUCT  DFITCFASLReqQryAccountField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
};

//FASL-�ͻ���Ϣ��ѯ��Ӧ
struct APISTRUCT  DFITCFASLRspQryAccountField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECAccountNameType              accountName;              //�ͻ�����
	DFITCSECAccountIdentityIDType        accountIdentityID;        //֤�����
	DFITCSECAccountIdentityTypeType      accountIdentityType;      //֤������
	DFITCSECBranchIDType                 branchID;                 //��������
	DFITCSBranchTypeType                 branchType;               //������־
	DFITCSECPhoneIDType                  mobile;                   //�ƶ��绰
	DFITCSECEntrustTypeType              entrustType;              //ί�з�ʽ
	DFITCSECAccountStatusType            accountStatus;            //�ͻ�״̬
	DFITCSECPasswdSyncFlagType           pwdSynFlag;               //����ͬ����־
};

//FASL-�ɶ���Ϣ��ѯ����
struct APISTRUCT  DFITCFASLReqQryShareholderField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(N)
};

//FASL-�ɶ���Ϣ��ѯ��Ӧ
struct APISTRUCT  DFITCFASLRspQryShareholderField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                account;                  //�ͻ���
	DFITCSECShareholderIDType            shareholderID;            //�ɶ���
	DFITCSECShareholderSpecPropType      shareholderSpecProp;      //�ɶ�ָ������
	DFITCSECTradePermissionsType         tradePermissions;         //����Ȩ��
	DFITCSECExchangeIDType               exchangeID;               //������
	DFITCSECShareholderStatusType        shareholderStatus;        //�ɶ�״̬
	DFITCSECMainAccountFlagType          mainAccountFlag;          //���˻���־
	DFITCSECShareholderCtlPropType       shareholderCtlProp;       //�ɶ���������
	DFITCSECShareholderTypeType          shareholderType;          //�ɶ����
};

//FASL-�ʽ��ת����
struct APISTRUCT  DFITCFASLReqTransferFundsField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECCurrencyType                 currency;                 //����(Y)
	DFITCSECMessageType                  summaryMsg;               //ժҪ(N)
	DFITCSECFundsType                    operateFunds;             //�������(Y)
	DFITCSECFundsTransferFlagType        fundsTransFlag;           //�ʽ��ת��־(Y)
};

//FASL-�ʽ��ת��Ӧ
struct APISTRUCT  DFITCFASLRspTransferFundsField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECSerialIDType                 serialID;                 //��ˮ��
	DFITCSECFundsType                    accountBanlance;          //�˻����
	DFITCSECFundsType                    availableFunds;           //�����ʽ�
	DFITCSECFundsTransferFlagType        fundsTransFlag;           //�ʽ��ת��־
};


//FASL-�ʽ𶳽���ϸ��ѯ����
struct APISTRUCT DFITCFASLReqQryFreezeFundsDetailField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECCurrencyType                 currency;                 //����(N)
	DFITCSECFundsFreezeTypeType          fundsFreezeType;          //�������(N)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECSerialIDType                 serialID;                 //��ˮ��(N)
	DFITCSECAccountIDType                capitalID;                //�ʽ��˺�(N)
	DFITCSECQuantityType                 rowIndex;                 //��ҳ����ֵ(N)
	DFITCSECQuantityType                 rowCount;                 //ÿҳ��ѯ����(N)
};

//FASL-�ʽ𶳽���ϸ��ѯ��Ӧ
struct APISTRUCT DFITCFASLRspQryFreezeFundsDetailField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECCurrencyType                 currency;                 //����
	DFITCSECFundsFreezeTypeType          fundsFreezeType;          //�������
	DFITCSECMessageType                  summaryMsg;               //ժҪ
	DFITCSECSerialIDType                 serialID;                 //��ˮ��
	DFITCSECFundsType                    operatorFunds;            //�������
	DFITCSECTimeType                     operatorTime;             //����ʱ��
	DFITCSECDateType                     operatorDate;             //��������
};

//FASL-֤ȯ������ϸ��ѯ����
struct APISTRUCT DFITCFASLReqQryFreezeStockDetailField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECStockFreezeTypeType          stockFreezeType;          //�������(N)
	DFITCSECExchangeIDType               exchangeID;               //����������(N)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECSecurityIDType               securityID;               //֤ȯ����(N)
	DFITCSECSerialIDType                 serialID;                 //��ˮ��(N)
	DFITCSECQuantityType                 rowIndex;                 //��ҳ����ֵ(N)
	DFITCSECQuantityType                 rowCount;                 //ÿҳ��ѯ����(N)
	DFITCSECSerialIDType                 outserialID;              //�ⲿ��ˮ��(N)
	DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N)-�ⲿ����
	DFITCSECTradeQryFlagType             queryFlag;                //��ѯ��־(N)
};

//FASL-֤ȯ������ϸ��ѯ��Ӧ
struct APISTRUCT DFITCFASLRspQryFreezeStockDetailField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECStockFreezeTypeType          stockFreezeType;          //�������
	DFITCSECShareholderIDType            shareholderID;            //�ɶ���
	DFITCSECExchangeIDType               exchangeID;               //����������
	DFITCSECSecurityIDType               securityID;               //֤ȯ����
	DFITCSECSerialIDType                 serialID;                 //��ˮ��
	DFITCSECTimeType                     operatorTime;             //����ʱ��
	DFITCSECDateType                     operatorDate;             //��������
	DFITCSECQuantityType                 operatorQty;              //��������
};

//FASL-��ѯ�ʽ������ϸ����
struct APISTRUCT DFITCFASLReqQryTransferFundsDetailField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECAccountIDType                capitalID;                //�ʽ��˺�(N)
	DFITCSECQuantityType                 rowIndex;                 //��ҳ����ֵ(N)
	DFITCSECQuantityType                 rowCount;                 //ÿҳ��ѯ����(N)
	DFITCSECAccountNodeIDType            accountNodeID;            //�ͻ������ڵ���(N)
};

//FASL-�ʽ������ϸ��ѯ��Ӧ
struct APISTRUCT DFITCFASLRspQryTransferFundsDetailField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECAccountIDType                capitalID;                //�ʽ��˺�
	DFITCSECCurrencyType                 currency;                 //����
	DFITCSECTransFundsFreezeTypeType     fundsFreezeType;          //�������
	DFITCSECMessageType                  summaryMsg;               //ժҪ
	DFITCSECContractNOType               serialID;                 //��ˮ��
	DFITCSECFundsType                    operatorFunds;            //�������
	DFITCSECTimeType                     operatorTime;             //����ʱ��
	DFITCSECDateType                     operatorDate;             //��������
};

//FASL-��ѯ�ͻ�֤ȯ������ϸ����
struct APISTRUCT DFITCFASLReqQryTransferStockDetailField
{
	DFITCSECRequestIDType                requestID;                 //����ID(Y)
	DFITCSECAccountIDType                accountID;                 //�ͻ���(Y)
	DFITCSECExchangeIDType               exchangeID;                //����������(N)
	DFITCSECStockFreezeTypeType          stockFreezeType;           //�������(N)
	DFITCSECIncQryIndexType              incQryIndex;               //������ѯ����ֵ(N)
	DFITCSECSerialIDType                 serialID;                  //��ˮ��(N)
};

//FASL-��ѯ�ͻ�֤ȯ������ϸ��Ӧ
struct APISTRUCT DFITCFASLRspQryTransferStockDetailField
{
	DFITCSECRequestIDType                requestID;                 //����ID
	DFITCSECAccountIDType                accountID;                 //�ͻ���
	DFITCSECAccountNameType              accountName;               //�ͻ�����
	DFITCSECBranchIDType                 branchID;                  //��������
	DFITCSECDateType                     operatorDate;              //��������
	DFITCSECExchangeIDType               exchangeID;                //����������
	DFITCSECStockFreezeTypeType          stockFreezeType;           //�������
	DFITCSECSecurityIDType               securityID;                //֤������
	DFITCSECSerialIDType                 serialID;                  //��ˮ��
	DFITCSECShareholderIDType            shareholderID;             //�ɶ���
	DFITCSECMessageType                  summaryMsg;                //ժҪ
	DFITCSECTimeType                     operatorTime;              //����ʱ��
	DFITCSECQuantityType                 operatorQty;               //��������
};

//FASL-ί�лر�
struct APISTRUCT DFITCFaslEntrustOrderRtnField
{
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECSessionIDType                sessionID;                //�Ự���
	DFITCSECShareholderIDType            shareholderID;            //�ɶ���
	DFITCSECExchangeIDType               exchangeID;               //����������
	DFITCSECCurrencyType                 currency;                 //����
	DFITCSECSecurityIDType               securityID;               //֤������
	DFITCSECSecurityTypeType             securityType;             //֤ȯ���
	DFITCSECQuantityType                 withdrawQty;              //��������
	DFITCSECWithdrawFlagType             withdrawFlag;             //������־
	DFITCSECFundsType                    freezeFunds;              //�����ʽ�
	DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
	DFITCSECDeclareResultType            declareResult;            //�걨���
	DFITCSECMessageType                  noteMsg;                  //���˵��
	DFITCSECQuantityType                 entrustQty;               //ί������
	DFITCSECOrderConfirmFlagType         orderConfirmFlag;         //ί��ȷ�ϱ�־
	DFITCSECTimeType                     entrustTime;              //ί��ʱ��
	DFITCSECPriceType                    entrustPrice;             //ί�м۸�
	DFITCSECOrderTypeType                orderType;                //��������
};

//FASL-�ɽ��ر�
struct APISTRUCT DFITCFaslTradeRtnField
{
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECSessionIDType                sessionID;                //�Ự���
	DFITCSECShareholderIDType            shareholderID;            //�ɶ���
	DFITCSECExchangeIDType               exchangeID;               //����������
	DFITCSECCurrencyType                 currency;                 //����
	DFITCSECSecurityIDType               securityID;               //֤������
	DFITCSECSecurityTypeType             securityType;             //֤ȯ���
	DFITCSECWithdrawFlagType             withdrawFlag;             //������־
	DFITCSECTradeIDType                  tradeID;                  //�ɽ����
	DFITCSECTimeType                     tradeTime;                //�ɽ�ʱ��
	DFITCSECQuantityType                 withdrawQty;              //��������
	DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
	DFITCSECFundsType                    clearFunds;               //�����ʽ�
	DFITCSECQuantityType                 totalTradeQty;            //ί���ܳɽ�����
	DFITCSECFundsType                    totalTurnover;            //ί���ܳɽ����
	DFITCSECQuantityType                 tradeQty;                 //���γɽ�����
	DFITCSECPriceType                    tradePrice;               //���γɽ��۸�
	DFITCSECFundsType                    turnover;                 //���γɽ����
	DFITCSECQuantityType                 entrustQty;               //ί������
	DFITCSECDeclareResultType            declareResult;            //�걨���(Ԥ���ֶ�)
	DFITCSECMessageType                  noteMsg;                  //���˵��(Ԥ���ֶ�)
};

//FASL-�����ر�
struct APISTRUCT DFITCFaslWithdrawOrderRtnField
{
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECSessionIDType                sessionID;                //�Ự���
	DFITCSECShareholderIDType            shareholderID;            //�ɶ���
	DFITCSECExchangeIDType               exchangeID;               //����������
	DFITCSECCurrencyType                 currency;                 //����
	DFITCSECSecurityIDType               securityID;               //֤ȯ����
	DFITCSECSecurityTypeType             securityType;             //֤ȯ���
	DFITCSECQuantityType                 withdrawQty;              //��������
	DFITCSECQuantityType                 tradeQty;                 //�ɽ�����
	DFITCSECWithdrawFlagType             withdrawFlag;             //������־
	DFITCSECFundsType                    freezeFunds;              //�����ʽ�
	DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����
	DFITCSECQuantityType                 entrustQty;               //ί������
	DFITCSECDeclareResultType            declareResult;            //�걨���(Ԥ���ֶ�)
	DFITCSECMessageType                  noteMsg;                  //���˵��(Ԥ���ֶ�)
};

//FASL-��ծ�䶯�ر�
struct APISTRUCT DFITCFaslLiabilitiesRtnField
{
	DFITCSECLocalOrderIDType             localOrderID;              //����ί�к�
	DFITCSECSpdOrderIDType               spdOrderID;                //��̨ί�к�
	DFITCSECSessionIDType                sessionID;                 //�Ự���
	DFITCSECAccountIDType                accountID;                 //�ͻ���	
	DFITCSECContractNOType               specifycontractNO;         //��Լ���
	DFITCSECExchangeIDType               exchangeID;                //����������
	DFITCSECSecurityIDType               securityID;                //֤������
	DFITCSECContractTypeType             contractType;              //��Լ���
	DFITCSECClearFlagType                clearFlag;                 //�����־
	DFITCSECChangeTypeType               changeType;                //�䶯���
	DFITCSECTradeStatusType              status;                    //״̬
	DFITCSECQuantityType                 operatorQty;               //��������
	DFITCSECFundsType                    operateFunds;              //�������
	DFITCSECFundsType                    operatorInterest;          //������Ϣ
	DFITCSECFundsType                    operatorCost;              //��������
	DFITCSECFundsType                    commission;                //������
	DFITCSECMessageType                  changeNote;                //�䶯˵��
	DFITCSECContractNOType               contractNO;                //��ͬ���
	DFITCSECDateType                     endDate;                   //��������
	DFITCSECFundsType                    depositRatio;              //��֤�����
	DFITCSECFundsType                    ratio;                      //����/����
	DFITCSECFundsType                    postInterest;              //������Ϣ
	DFITCSECDateType                     operatorDate;              //��������
	DFITCSECTradeStatusType              usedLimitsFreezeFlag;      //��ȶ����ʶ
    DFITCSECShareholderIDType            shareholderID;             //�ɶ���
	DFITCSECDateType                     contracttimeLimit;         //��Լ����
};

//FASL-֤ȯ��ת����
struct APISTRUCT  DFITCFASLReqTransferStockField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECSecurityIDType				 securityID;			   //֤ȯ����(Y)
	DFITCSECCurrencyType                 currency;                 //����(N)
	DFITCSECMessageType                  summaryMsg;               //ժҪ(N)
	DFITCSECQuantityType                 operatorQty;              //��������(Y)
	DFITCSECStockTransferFlagType        stockTransFlag;           //֤ȯ��ת��־(Y)
	DFITCSECBranchIDType                 branchID;                 //Ӫҵ��(N)
	DFITCSECCirculateTypeType            circulateType;            //��ͨ����(N)������Ĭ��ֻ����ͨ��,��0�����ͨ,��1����ͨ,��2��ȫ��
	DFITCSECShareNatureType				 shareNature;			   //�ɷ�����(N)
};

//FASL-֤ȯ��ת��Ӧ
struct APISTRUCT  DFITCFASLRspTransferStockField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECSerialIDType                 serialID;                 //��ˮ��
	DFITCSECMessageType                  returnMsg;                //������Ϣ
};

//QUOTE-ָ���ĺ�Լ
struct APISTRUCT DFITCSECSpecificInstrumentField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECSecurityIDType               securityID;               //��Լ����
    DFITCSECExchangeIDType               exchangeID;               //����������
};

//sop ���е�
struct APISTRUCT DFITCSOPSpecificDataField
{
    DFITCSECContractIDType               contractID;               //��Ȩ��ʶ����(601318C1412M03500)
    DFITCSECFundsType                    execPrice;                //��Ȩ�۸�
    DFITCSECFundsType                    preSettlePrice;           //������
    DFITCSECFundsType                    settlePrice;              //�����
    DFITCSECLargeQuantityType            positionQty;              //�ֲ�����
    DFITCSECFundsType                    auctionPrice;             //��̬�ο��۸�
    DFITCSECTimeType                     latestEnquiryTime;        //Ԥ��ʱ���ֶ�
};

//stock ���е�
struct APISTRUCT DFITCStockSpecificDataField
{
    DFITCSECFundsType                    peRadio1;                 //��ӯ��1
    DFITCSECFundsType                    peRadio2;                 //��ӯ��2
};

//���о�̬��
struct APISTRUCT DFITCStaticDataField
{
    DFITCSECSecurityIDType               securityID;               //֤ȯ����
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
    DFITCSECDateType                     tradingDay;               //������
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECFundsType                    preClosePrice;            //������
    DFITCSECFundsType                    openPrice;                //����
    DFITCSECFundsType                    upperLimitPrice;          //��ͣ���
    DFITCSECFundsType                    lowerLimitPrice;          //��ͣ���

};

//���ж�̬��
struct APISTRUCT DFITCSharedDataField
{
    DFITCSECFundsType                    latestPrice;              //���¼�
    DFITCSECFundsType                    turnover;                 //�ɽ����
    DFITCSECFundsType                    highestPrice;             //��߼�
    DFITCSECFundsType                    lowestPrice;              //��ͼ�
    DFITCSECLargeQuantityType            tradeQty;                 //�ɽ�����
    DFITCSECTimeType                     updateTime;               //ʱ���
    DFITCSECFundsType                    bidPrice1;                //�����һ
    DFITCSECLargeQuantityType            bidQty1;                  //������һ
    DFITCSECFundsType                    askPrice1;                //������һ
    DFITCSECLargeQuantityType            askQty1;                  //������һ
    DFITCSECFundsType                    bidPrice2;                //����۶�
    DFITCSECLargeQuantityType            bidQty2;                  //��������
    DFITCSECFundsType                    askPrice2;                //�����۶�
    DFITCSECLargeQuantityType            askQty2;                  //��������
    DFITCSECFundsType                    bidPrice3;                //�������
    DFITCSECLargeQuantityType            bidQty3;                  //��������
    DFITCSECFundsType                    askPrice3;                //��������
    DFITCSECLargeQuantityType            askQty3;                  //��������
    DFITCSECFundsType                    bidPrice4;                //�������
    DFITCSECLargeQuantityType            bidQty4;                  //��������
    DFITCSECFundsType                    askPrice4;                //��������
    DFITCSECLargeQuantityType            askQty4;                  //��������
    DFITCSECFundsType                    bidPrice5;                //�������
    DFITCSECLargeQuantityType            bidQty5;                  //��������
    DFITCSECFundsType                    askPrice5;                //��������
    DFITCSECLargeQuantityType            askQty5;                  //��������
    DFITCSECTradingPhaseCodeType         tradingPhaseCode;         //��Ʒʵʱ�׶μ���־
};

struct APISTRUCT DFITCSOPDepthMarketDataField
{
    struct DFITCSOPSpecificDataField     specificDataField;        //���е�
    struct DFITCStaticDataField          staticDataField;          //���еľ�̬
    struct DFITCSharedDataField          sharedDataField;          //���еĶ�̬ 
};

struct APISTRUCT DFITCStockDepthMarketDataField
{
    struct DFITCStockSpecificDataField   specificDataField;        //���е�
    struct DFITCStaticDataField          staticDataField;          //���еľ�̬
    struct DFITCSharedDataField          sharedDataField ;         //���еĶ�̬ 
};

//STOCK-֤ȯ��̬��Ϣ��ѯ����
struct APISTRUCT DFITCStockReqQryStockStaticField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECIncQryIndexType              incQryIndex;              //������ѯ����ֵ(N)
};

//STOCK-֤ȯ��̬��Ϣ��ѯ��Ӧ
struct APISTRUCT DFITCStockRspQryStockStaticField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECStockTradeFlagType           stopFlag;                 //ͣ�Ʊ�־
    DFITCSECPriceType                    preClosePrice;            //�����̼�
    DFITCSECPriceType                    openPrice;                //���̼�
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECSecurityIDType               securityID;               //֤������
    DFITCSECPriceType                    interestQuote;            //��Ϣ����
    DFITCSECPriceType                    securityFaceValue;        //֤ȯ��ֵ
    DFITCSECBidTradeFlagType             bidTradeFlag;             //���۽��ױ�־
    DFITCSECTradeUnitType                tradeUnit;                //���׵�λ
    DFITCSECBusinessLimitType            businessLimit;            //��������
    DFITCSECSecurityTypeType             securityType;             //֤ȯ���
    DFITCSECSecurityNameType             securityName;             //֤ȯ����
    DFITCSECPriceType                    upperLimitPrice;          //��ͣ���
    DFITCSECPriceType                    lowerLimitPrice;          //��ͣ���
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECOrderTypeLimitType           orderLimits;              //������������
	DFITCSECIncQryIndexType              incQryIndex;              //������ѯ����ֵ
};

//SOP-�������ֲ���ϲ��ί������
struct APISTRUCT DFITCSOPReqGroupSplitField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
    DFITCSECSecurityIDType               securityOptionID;         //��Ȩ����(Y)
    DFITCSECSubAccountIDType             subAccountID;             //���˻�����(N)(Ԥ���ֶ�)
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־(Y)
    DFITCSECExchangeGroupTypeType        groupType;                //�������(Y)
    DFITCSECGroupCodeType                groupCode;                //��ϱ���(Y)
    DFITCSECSecurityIDType               securityOptionID1;        //��Ȩ����1��(Y)
    DFITCSECSecurityIDType               securityOptionID2;        //��Ȩ����2��(Y)
    DFITCSECSecurityIDType               securityOptionID3;        //��Ȩ����3��(N)(Ԥ���ֶ�)
    DFITCSECSecurityIDType               securityOptionID4;        //��Ȩ����4��(N)(Ԥ���ֶ�)
    DFITCSECQuantityType                 entrustQty;               //ί������(Y)
    DFITCSECTDevIDType                   devID;                    //����ID(N)
    DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N)
};

//SOP-��Ȩ�����Ȩί������
struct APISTRUCT DFITCSOPReqGroupExectueOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
    DFITCSECExchangeIDType               exchangeID;               //����������(Y)
    DFITCSECSecurityIDType               securityOptionID1;        //��Ȩ����1��(Y)
    DFITCSECSecurityIDType               securityOptionID2;        //��Ȩ����2��(Y)
    DFITCSECSubAccountIDType             subAccountID;             //���˻�����(N)(Ԥ���ֶ�)
    DFITCSECQuantityType                 entrustQty;               //ί������(Y)
    DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
    DFITCSECOpenCloseFlagType            openCloseFlag;            //��ƽ��־(Y)
    DFITCSECOrderCategoryType            orderCategory;            //ί�е����(Y)
    DFITCSECTDevIDType                   devID;                    //����ID(N)
    DFITCSECTDevDecInfoType              devDecInfo;               //�û��Զ����ֶ�(N)
};

//SOP-��Ȩ�����Ȩί����Ӧ
struct APISTRUCT DFITCSOPRspGroupExectueOrderField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
    DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
    DFITCSECTimeType                     entrustTime;              //ί��ʱ��
    DFITCSECFundsType                    freezeFunds;              //�����ʽ�
};

//SOP-��ѯ�ͻ���ϳֲ���ϸ����
struct APISTRUCT DFITCSOPReqQryGroupPositionField
{
    DFITCSECRequestIDType                requestID;                //����ID(Y)
    DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
};

//SOP-��ѯ�ͻ���ϳֲ���ϸ��Ӧ
struct APISTRUCT DFITCSOPRspQryGroupPositionField
{
    DFITCSECRequestIDType                requestID;                //����ID
    DFITCSECAccountIDType                accountID;                //�ͻ���
    DFITCSECExchangeIDType               exchangeID;               //����������
    DFITCSECShareholderIDType            shareholderID;            //�ɶ���
    DFITCSECSubAccountIDType             subAccountID;             //���˻�����
    DFITCSECCurrencyType                 currency;                 //����
    DFITCSECAccountIDType                capitalID;                //�ʽ��˺�
    DFITCSECExchangeGroupTypeType        groupType;                //�������
    DFITCSECGroupCodeType                groupCode;                //��ϱ���
    DFITCSECQuantityType                 groupQty;                 //�������
    DFITCSECQuantityType                 enableSplitQty;           //�ɲ������
    DFITCSECQuantityType                 splitEntrustQty;          //���ί������
    DFITCSECQuantityType                 splitTradeQty;            //��ֳɽ�����
    DFITCSECFundsType                    groupDeposit;             //��ϱ�֤��
    DFITCSECSecurityIDType               securityOptionID1;        //��Ȩ����1��
    DFITCSECSecurityIDType               securityOptionID2;        //��Ȩ����2��
    DFITCSECSecurityIDType               securityOptionID3;        //��Ȩ����3��
    DFITCSECSecurityIDType               securityOptionID4;        //��Ȩ����4��
};

//�ն���Ϣ
struct APISTRUCT DFITCTerminalInfoField
{
	DFITCSECSystemInfo                   systemInfo;               //�ɼ���Ϣ
	DFITCSECSecretkeyVer                 secretkeyVer;             //��Կ�汾
	DFITCSECAppID                        appID;                    //�м�AppID
	DFITCSECExceptionFlag                exceptionFlag;            //�쳣��ʶ
	DFITCSECClientPublicIP               clientPublicIP;           //�ͻ��ն˹���IP��ַ
	DFITCSECClientPublicPort             clientPublicPort;         //�ͻ��ն˹����˿ں�
	DFITCSECClientLoginTime              clientLoginTime;          //�ͻ��ն˵�¼ʱ��
	DFITCSECSystemInfoIntegrity          systemInfo_integrity;     //�ɼ���Ϣ������
};



//����ΪSTOCK����ҵ�������/Ӧ��ṹ��

//STOCK-ETF��������
struct APISTRUCT DFITCStockReqETFEntrustOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECFundIDType				     fundID;				   //�������(Y)
	DFITCSECComponentStocksIDType        componentStocksID;		   //�ɷֹɴ���(Y)
	DFITCSECQuantityType                 entrustQty;               //ί������(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
	DFITCSECOrderTypeType                orderType;                //��������(Y)
	DFITCSECStockOrderCategoryType			 orderCategory;		   //�������(Y)
	DFITCSECStepType					 step;					   //����step��
	DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
	DFITCSECSeatIDType                   eachSeatID;               //�Է�ϯλ��(N)
	DFITCSECSerialIDType                 serialID;                 //��չ��ˮ��(N)(Ԥ���ֶ�)
};

//STOCK-ETF������Ӧ
struct APISTRUCT DFITCStockRspETFEntrustOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
	DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
	DFITCSECTimeType                     entrustTime;              //ί��ʱ��
	DFITCSECFundsType                    freezeFunds;              //�����ʽ�
	DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
	DFITCSECMessageType                  entrustMsg;               //ί�з�����Ϣ
};

//STOCK-ETF���ӹ���������
struct APISTRUCT DFITCStockReqETFBasketOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECFundIDType				     fundID;				   //�������(Y)
	DFITCSECQuantityType                 entrustQty;               //ί������(Y)
	DFITCSECPriceType                    entrustPrice;             //ί�м۸�(N)
	DFITCSECOrderTypeType                orderType;                //��������(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
	DFITCSECStockOrderCategoryType		 orderCategory;			   //�������(Y)
	DFITCSECStepType					 step;					   //����step��
	DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
	DFITCSECSeatIDType                   eachSeatID;               //�Է�ϯλ��(N)
	DFITCSECSerialIDType                 serialID;                 //��չ��ˮ��(N)(Ԥ���ֶ�)
};


//STOCK-ETF���ӹ�������Ӧ
struct APISTRUCT DFITCStockRspETFBasketOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
	DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
	DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�
	DFITCSECMessageType                  entrustMsg;               //ί�з�����Ϣ
	DFITCSECComponentStocksIDType        componentStocksID;		   //�ɷֹɴ���
	DFITCSECQuantityType	             totalCount;			   //�ɷֹ�����
	DFITCSECQuantityType	             succCount;                //�ɷֹ������ɹ�����
	DFITCSECQuantityType				 failCount;                //�ɷֹ�����ʧ������
};

//STOCK-ծȯ�ع�����
struct APISTRUCT DFITCStockReqBondRepurchaseOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECSecurityIDType				 securityID;			   //֤ȯ����
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
	DFITCSECQuantityType                 entrustQty;               //ί������(Y)
	DFITCSECPriceType                    entrustPrice;             //ί�м۸�(N)
	DFITCSECOrderTypeType                orderType;				   //��������(Y)
	DFITCSECStockOrderCategoryType		 orderCategory;			   //�������(Y)
	DFITCSECStepType					 step;					   //����step��(N)
	DFITCSECSerialIDType                 serialID;                 //��չ��ˮ��(N)(Ԥ���ֶ�)
};

//STOCK-ծȯ�ع���Ӧ
struct APISTRUCT DFITCStockRspBondRepurchaseOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
	DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
	DFITCSECTimeType                     entrustTime;              //ί��ʱ��
	DFITCSECFundsType                    freezeFunds;              //�����ʽ�
	DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
	DFITCSECMessageType                  entrustMsg;               //ί�з�����Ϣ
};

//STOCK-ծȯ���������
struct APISTRUCT DFITCStockReqBondInOutStockOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECSecurityIDType				 securityID;			   //��Ѻ����(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
	DFITCSECQuantityType                 entrustQty;               //ί������(Y)
	DFITCSECPriceType                    entrustPrice;             //ί�м۸�(Y)
	DFITCSECOrderTypeType				 orderType;				   //��������(Y)
	DFITCSECStockOrderCategoryType		 orderCategory;			   //�������(Y)
	DFITCSECOrderTradeLimitType			 orderTradeLimit;		   //��������ʱ��(N)
	DFITCSECOrderExpiryDateType			 orderExpiryDate;		   //����ʱЧ����(N)
	DFITCSECOrderEffectiveDateType		 orderEffectiveDate;	   //������Ч����(N)
	DFITCSECStopLossLimitPriceType		 stopLossLimitPrice;	   //ֹ���޼�(N)
	DFITCSECStepType					 step;					   //����step��(N)
	DFITCSECSerialIDType                 serialID;                 //��չ��ˮ��(N)(Ԥ���ֶ�)
};

//STOCK-ծȯ�������Ӧ
struct APISTRUCT DFITCStockRspBondInOutStockOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
	DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
	DFITCSECTimeType                     entrustTime;              //ί��ʱ��
	DFITCSECFundsType                    freezeFunds;              //�����ʽ�
	DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
	DFITCSECMessageType                  entrustMsg;               //ί�з�����Ϣ
};

//STOCK-����ҵ������
struct APISTRUCT DFITCStockReqIssueBusinessOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECSecurityIDType				 securityID;			   //֤ȯ����(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
	DFITCSECQuantityType                 entrustQty;               //ί������(Y)
	DFITCSECPriceType                    entrustPrice;             //ί�м۸�(Y)
	DFITCSECOrderTypeType				 orderType;				   //��������(Y)
	DFITCSECSerialIDType                 serialID;                 //��չ��ˮ��(N)(Ԥ���ֶ�)
};

//STOCK-����ҵ����Ӧ
struct APISTRUCT DFITCStockRspIssueBusinessOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
	DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
	DFITCSECTimeType                     entrustTime;              //ί��ʱ��
	DFITCSECFundsType                    freezeFunds;              //�����ʽ�
	DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
	DFITCSECMessageType                  entrustMsg;               //ί�з�����Ϣ
};

//STOCK-LOF����ί������
struct APISTRUCT DFITCStockReqLOFEntrustOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECFundIDType				     fundID;				   //�������(Y)
	DFITCSECQuantityType                 entrustQty;               //ί������(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
	DFITCSECOrderTypeType                orderType;                //��������(Y)
	DFITCSECStockOrderCategoryType		 orderCategory;			   //�������(Y)
	DFITCSECDividendsPatternType		 dividendsPattern;		   //�ֺ췽ʽ(N)
	DFITCSECSerialIDType                 serialID;                 //��չ��ˮ��(N)(Ԥ���ֶ�)
};

//STOCK-LOF����ί����Ӧ
struct APISTRUCT DFITCStockRspLOFEntrustOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
	DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
	DFITCSECTimeType                     entrustTime;              //ί��ʱ��
	DFITCSECFundsType                    freezeFunds;              //�����ʽ�
	DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
	DFITCSECMessageType                  entrustMsg;               //ί�з�����Ϣ
};


//STOCK-�̺󶨼�����
struct APISTRUCT DFITCStockReqAfterHoursPriceOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECSecurityIDType				 securityID;			   //֤ȯ����(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
	DFITCSECQuantityType                 entrustQty;               //ί������(Y)
	DFITCSECPriceType                    entrustPrice;             //ί�м۸�(Y)
	DFITCSECOrderTypeType				 orderType;				   //��������(Y)
	DFITCSECSerialIDType                 serialID;                 //��չ��ˮ��(N)(Ԥ���ֶ�)
};

//STOCK-�̺󶨼���Ӧ
struct APISTRUCT DFITCStockRspAfterHoursPriceOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
	DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
	DFITCSECTimeType                     entrustTime;              //ί��ʱ��
	DFITCSECFundsType                    freezeFunds;              //�����ʽ�
	DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
	DFITCSECMessageType                  entrustMsg;               //ί�з�����Ϣ
};

//STOCK-�ǽ���ҵ������
struct APISTRUCT DFITCStockReqNonTradingBusinessOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECSecurityIDType				 securityID;			   //֤ȯ����(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
	DFITCSECQuantityType                 entrustQty;               //ί������(Y)
	DFITCSECPriceType                    entrustPrice;             //ί�м۸�(Y)
	DFITCSECOrderTypeType				 orderType;				   //��������(Y)
	DFITCSECOrderTradeLimitType			 orderTradeLimit;		   //����������������(N)
	DFITCSECOrderExpiryDateType			 orderExpiryDate;          //����ʱЧ����(N)
	DFITCSECOrderEffectiveDateType		 orderEffectiveDate;       //������Ч����(N)
	DFITCSECStopLossLimitPriceType		 stopLossLimitPrice;	   //ֹ���޼�(N)
	DFITCSECOrderCategoryType            orderCategoryType;		   //ί�е����(N)
	DFITCSECStepType                     step;					   //step(N)
	DFITCSECSerialIDType                 serialID;                 //��չ��ˮ��(N)(Ԥ���ֶ�)
	DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
	DFITCSECShareNatureType				 shareNature;			   //�ɷ�����(N)
	DFITCSECBranchIDType				 branchID;				   //�չ��˱���(������Ҫ)


};

//STOCK-�ǽ���ҵ����Ӧ
struct APISTRUCT DFITCStockRspNonTradingBusinessOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
	DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
	DFITCSECTimeType                     entrustTime;              //ί��ʱ��
	DFITCSECFundsType                    freezeFunds;              //�����ʽ�
	DFITCSECMessageType                  entrustMsg;               //ί�з�����Ϣ
	DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
};

//STOCK-�Ϻ�����ͨ����
struct APISTRUCT DFITCStockReqSHMutualFundOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECSecurityIDType				 securityID;			   //֤ȯ����(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
	DFITCSECQuantityType                 entrustQty;               //ί������(Y)
	DFITCSECPriceType                    entrustPrice;             //ί�м۸�(Y)
	DFITCSECOrderTypeType				 orderType;				   //��������(Y)
	DFITCSECOrderCategoryType			 orderCategory;			   //�������(Y)
	DFITCSECDividendsPatternType		 dividendsPattern;		   //�ֺ췽ʽ(Y)�����÷ֺ췽ʽʱ��Ҫ��
	DFITCSECFundIDType					 fundID;				   //Ŀ��������(Y)
	DFITCSECOrderTradeLimitType			 orderTradeLimit;		   //����������������(N)
	DFITCSECOrderExpiryDateType			 orderExpiryDate;          //����ʱЧ����(N)
	DFITCSECOrderEffectiveDateType		 orderEffectiveDate;       //������Ч����(N)
	DFITCSECStopLossLimitPriceType		 stopLossLimitPrice;	   //ֹ���޼�(N)
	DFITCSECOrderCategoryType            orderCategoryType;		   //ί�е����(N)
	DFITCSECStepType                     step;					   //step(N)
	DFITCSECSerialIDType                 serialID;                 //��չ��ˮ��(N)(Ԥ���ֶ�)
	   
};

//STOCK-�Ϻ�����ͨ��Ӧ
struct APISTRUCT DFITCStockRspSHMutualFundOrderField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECLocalOrderIDType             localOrderID;             //����ί�к�
	DFITCSECSpdOrderIDType               spdOrderID;               //��̨ί�к�
	DFITCSECTimeType                     entrustTime;              //ί��ʱ��
	DFITCSECFundsType                    freezeFunds;              //�����ʽ�
	DFITCSECEntrustBatchIDType           entrustBatchID;           //ί�����κ�(N)
	DFITCSECMessageType                  entrustMsg;               //ί�з�����Ϣ
};

//STOCK-���������ETF��Ʊ��������
struct APISTRUCT DFITCStockReqCalcAblePurchaseETFBasketQtyField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECSecurityIDType               securityID;               //֤ȯ����(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
	DFITCSECOrderTypeType				 orderType;				   //��������(Y)
};

//STOCK-���������ETF��Ʊ������Ӧ
struct APISTRUCT DFITCStockRspCalcAblePurchaseETFBasketQtyField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECExchangeIDType               exchangeID;               //����������
	DFITCSECSecurityIDType               securityID;               //֤ȯ����
	DFITCSECQuantityType                 ablePurchaseETFQty;       //��ί������
};

//STOCK-����ծȯ�ع���ί����������
struct APISTRUCT DFITCStockReqCalcAbleBondRepurchaseQtyField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECSecurityIDType               securityID;               //֤ȯ����(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
	DFITCSECOrderTypeType				 orderType;				   //��������(Y)
};

//STOCK-����ծȯ�ع���ί��������Ӧ
struct APISTRUCT DFITCStockRspCalcAbleBondRepurchaseQtyField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECExchangeIDType               exchangeID;               //����������
	DFITCSECSecurityIDType               securityID;               //֤ȯ����
	DFITCSECQuantityType                 ableEntrustQty;           //��ί������
};

//STOCK-���㷢��ҵ����Ϲ���������
struct APISTRUCT DFITCStockReqCalcAbleIssueBusinessQtyField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECSecurityIDType               securityID;               //֤ȯ����(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
	DFITCSECPriceType                    entrustPrice;             //ί�м۸�(Y)
	DFITCSECOrderTypeType				 orderType;				   //��������(Y)
};

//STOCK-���㷢��ҵ����Ϲ�������Ӧ
struct APISTRUCT DFITCStockRspCalcAbleIssueBusinessQtyField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECExchangeIDType               exchangeID;               //����������
	DFITCSECSecurityIDType               securityID;               //֤ȯ����
	DFITCSECQuantityType                 ableEntrustQty;           //��ί������
};

//STOCK-����LOFҵ���ί����������
struct APISTRUCT DFITCStockReqCalcAblePurchaseLOFQtyField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECSecurityIDType               securityID;               //֤ȯ����(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
	DFITCSECPriceType                    entrustPrice;             //ί�м۸�(Y)
	DFITCSECOrderTypeType				 orderType;				   //��������(Y)
};

//STOCK-����LOFҵ���ί��������Ӧ
struct APISTRUCT DFITCStockRspCalcAblePurchaseLOFQtyField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECExchangeIDType               exchangeID;               //����������
	DFITCSECSecurityIDType               securityID;               //֤ȯ����
	DFITCSECLargeQuantityType            ableEntrustQty;           //��ί������
};

//STOCK-�����̺󶨼ۿ�������������
struct APISTRUCT DFITCStockReqCalcAbleAfterHoursPriceQtyField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECSecurityIDType               securityID;               //֤ȯ����(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
	DFITCSECPriceType                    entrustPrice;             //ί�м۸�(Y)
	DFITCSECOrderTypeType				 orderType;				   //��������(Y)
	DFITCSECSpecificFlagType			 specificFlag;			   //�ض���־(Y)
};

//STOCK-�����̺󶨼ۿ�����������Ӧ
struct APISTRUCT DFITCStockRspCalcAbleAfterHoursPriceQtyField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECExchangeIDType               exchangeID;               //����������
	DFITCSECSecurityIDType               securityID;               //֤ȯ����
	DFITCSECQuantityType                 ableEntrustQty;           //��ί������
};

//STOCK-����ǽ���ҵ����Ϲ���������
struct APISTRUCT DFITCStockReqCalcAbleNonTradingBusinessQtyField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECSecurityIDType               securityID;               //֤ȯ����(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
	DFITCSECPriceType                    entrustPrice;             //ί�м۸�(Y)
	DFITCSECOrderTypeType				 orderType;				   //��������(Y)
};

//STOCK-����ǽ���ҵ����Ϲ�������Ӧ
struct APISTRUCT DFITCStockRspCalcAbleNonTradingBusinessQtyField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECExchangeIDType               exchangeID;               //����������
	DFITCSECSecurityIDType               securityID;               //֤ȯ����
	DFITCSECQuantityType                 ableEntrustQty;           //��ί������
};

//STOCK-�����Ϻ�����ҵ����Ϲ���������
struct APISTRUCT DFITCStockReqCalcAbleSHMutualFundQtyField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECExchangeIDType               exchangeID;               //����������(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECSecurityIDType               securityID;               //֤ȯ����(Y)
	DFITCSECEntrustDirectionType         entrustDirection;         //ί�����(Y)
	DFITCSECPriceType                    entrustPrice;             //ί�м۸�(Y)
	DFITCSECOrderTypeType				 orderType;				   //��������(Y)
};

//STOCK-�����Ϻ�����ҵ����Ϲ�������Ӧ
struct APISTRUCT DFITCStockRspCalcAbleSHMutualFundQtyField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECExchangeIDType               exchangeID;               //����������
	DFITCSECSecurityIDType               securityID;               //֤ȯ����
	DFITCSECQuantityType                 ableEntrustQty;           //��ί������
};

//SOP-�ʽ����������� 
struct APISTRUCT DFITCSOPReqCapitalTranInOutField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECFundsType					 allocationAmount;		   //�������(Y)
	DFITCSECCurrencyType                 currency;                 //����(Y)
	DFITCSECMessageType                  summaryMsg;               //ժҪ(N)
	DFITCSECFundsTransferFlagType        fundsTransFlag;           //�ʽ��ת��־(Y)(1����,2����)

};

//SOP-�ʽ���������Ӧ
struct APISTRUCT DFITCSOPRspCapitalTranInOutField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECLargeSerialIDType            serialID;                 //��ˮ��
	DFITCSECFundsType                    accountBanlance;          //�˻����
	DFITCSECFundsType                    availableFunds;           //�����ʽ�
	DFITCSECFundsType                    t2AvailableFunds;         //T+2�����ʽ�
	DFITCSECFundsType                    desirableFunds;           //��ȡ�ʽ�
};

//SOP-�ʽ��ڵ���������ѯ����
struct APISTRUCT DFITCSOPReqQryCapitalDistributionRatioField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
};

//SOP-�ʽ��ڵ���������ѯ��Ӧ
struct APISTRUCT DFITCSOPRspQryCapitalDistributionRatioField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECAccountIDType                capitalID;                //�ʽ��˺�
	DFITCSECCurrencyType                 currency;                 //����
	DFITCSECExchangeIDType               exchangeID;               //����������
	DFITCSECAccountNodeIDType            nodeID;				   //�ڵ���
	DFITCSECFundsType                    distributionRatio;        //�������
};

//SOP-�ڵ���ʽ𻮲�����
struct APISTRUCT DFITCSOPReqFundTransBetweenNodesField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECFundsType					 allocationAmount;		   //�������(Y)
	DFITCSECAccountNodeIDType            nodeIDOut;				   //�����ڵ���(Y)
	DFITCSECAccountNodeIDType            nodeIDIn;				   //����ڵ���(Y)
	DFITCSECMessageType                  summaryMsg;               //ժҪ(N)
};

//SOP-�ڵ���ʽ𻮲���Ӧ
struct APISTRUCT DFITCSOPRspFundTransBetweenNodesField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECLargeSerialIDType            serialID;                 //��ˮ��
	DFITCSECMessageType                  rtnMsg;                   //������Ϣ
};

//SOP-�޸��ʽ�����������
struct APISTRUCT DFITCSOPReqModCapitalDistributionRatioField
{
	DFITCSECRequestIDType                requestID;                //����ID(Y)
	DFITCSECAccountIDType                accountID;                //�ͻ���(Y)
	DFITCSECAccountNodeIDType            nodeID;				   //�ڵ���(Y)
	DFITCSECFundsType                    distributionRatio;        //�������[0-1](Y)
	DFITCSECMessageType                  summaryMsg;               //ժҪ(N)
};

//SOP-�޸��ʽ���������Ӧ
struct APISTRUCT DFITCSOPRspModCapitalDistributionRatioField
{
	DFITCSECRequestIDType                requestID;                //����ID
	DFITCSECAccountIDType                accountID;                //�ͻ���
	DFITCSECMessageType                  rtnMsg;                   //������Ϣ
};



#endif
