#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function LoginWidget.LoginWidget_C.OptionServerSavedataLoadRequest
	 */
	struct ULoginWidget_C_OptionServerSavedataLoadRequest_Params
	{	};

	/**
	 * Function LoginWidget.LoginWidget_C.Try Get Auth Token from Command Line
	 */
	struct ULoginWidget_C_TryGetAuthTokenfromCommandLine_Params
	{	};

	/**
	 * Function LoginWidget.LoginWidget_C.BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature
	 */
	struct ULoginWidget_C_BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature_Params
	{
	public:
		class FString                                              InAuthToken;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function LoginWidget.LoginWidget_C.StartBNOLauncherLogin
	 */
	struct ULoginWidget_C_StartBNOLauncherLogin_Params
	{	};

	/**
	 * Function LoginWidget.LoginWidget_C.OnCheckMaintenanceComplete
	 */
	struct ULoginWidget_C_OnCheckMaintenanceComplete_Params
	{
	public:
		bool                                                       bCheckSucess;                                            // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bIsMaintenance;                                          // 0x0001(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function LoginWidget.LoginWidget_C.BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature
	 */
	struct ULoginWidget_C_BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature_Params
	{
	public:
		class FString                                              EMail;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FString                                              Password;                                                // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function LoginWidget.LoginWidget_C.OnLoginCompleted_Event_1
	 */
	struct ULoginWidget_C_OnLoginCompleted_Event_1_Params
	{
	public:
		class FString                                              ApiToken;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function LoginWidget.LoginWidget_C.StartBNIDLogin
	 */
	struct ULoginWidget_C_StartBNIDLogin_Params
	{	};

	/**
	 * Function LoginWidget.LoginWidget_C.Construct
	 */
	struct ULoginWidget_C_Construct_Params
	{	};

	/**
	 * Function LoginWidget.LoginWidget_C.OnLoginSuccess
	 */
	struct ULoginWidget_C_OnLoginSuccess_Params
	{	};

	/**
	 * Function LoginWidget.LoginWidget_C.OnLoginFailure
	 */
	struct ULoginWidget_C_OnLoginFailure_Params
	{
	public:
		int32_t                                                    InRetCode;                                               // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function LoginWidget.LoginWidget_C.BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_1_BNIDLoginClicked__DelegateSignature
	 */
	struct ULoginWidget_C_BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_1_BNIDLoginClicked__DelegateSignature_Params
	{	};

	/**
	 * Function LoginWidget.LoginWidget_C.BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_0_DevLoginClicked__DelegateSignature
	 */
	struct ULoginWidget_C_BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_0_DevLoginClicked__DelegateSignature_Params
	{	};

	/**
	 * Function LoginWidget.LoginWidget_C.BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_2_BNOLauncherLoginClicked__DelegateSignature
	 */
	struct ULoginWidget_C_BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_2_BNOLauncherLoginClicked__DelegateSignature_Params
	{	};

	/**
	 * Function LoginWidget.LoginWidget_C.ExecuteUbergraph_LoginWidget
	 */
	struct ULoginWidget_C_ExecuteUbergraph_LoginWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5ZEL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function LoginWidget.LoginWidget_C.OnLoginCompleted__DelegateSignature
	 */
	struct ULoginWidget_C_OnLoginCompleted__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
