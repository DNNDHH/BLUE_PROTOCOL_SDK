/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoginWidget.LoginWidget_C.OptionServerSavedataLoadRequest
	 * 		Flags  -> ()
	 */
	void ULoginWidget_C::OptionServerSavedataLoadRequest()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWidget.LoginWidget_C.OptionServerSavedataLoadRequest");
		
		ULoginWidget_C_OptionServerSavedataLoadRequest_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoginWidget.LoginWidget_C.Try Get Auth Token from Command Line
	 * 		Flags  -> ()
	 */
	void ULoginWidget_C::TryGetAuthTokenfromCommandLine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWidget.LoginWidget_C.Try Get Auth Token from Command Line");
		
		ULoginWidget_C_TryGetAuthTokenfromCommandLine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoginWidget.LoginWidget_C.BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InAuthToken                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULoginWidget_C::BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature(const class FString& InAuthToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWidget.LoginWidget_C.BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature");
		
		ULoginWidget_C_BndEvt__InputAuthToken_K2Node_ComponentBoundEvent_0_OnInput__DelegateSignature_Params params {};
		params.InAuthToken = InAuthToken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoginWidget.LoginWidget_C.StartBNOLauncherLogin
	 * 		Flags  -> ()
	 */
	void ULoginWidget_C::StartBNOLauncherLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWidget.LoginWidget_C.StartBNOLauncherLogin");
		
		ULoginWidget_C_StartBNOLauncherLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoginWidget.LoginWidget_C.OnCheckMaintenanceComplete
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCheckSucess                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               bIsMaintenance                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULoginWidget_C::OnCheckMaintenanceComplete(bool bCheckSucess, bool bIsMaintenance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWidget.LoginWidget_C.OnCheckMaintenanceComplete");
		
		ULoginWidget_C_OnCheckMaintenanceComplete_Params params {};
		params.bCheckSucess = bCheckSucess;
		params.bIsMaintenance = bIsMaintenance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoginWidget.LoginWidget_C.BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EMail                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Password                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULoginWidget_C::BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature(const class FString& EMail, const class FString& Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWidget.LoginWidget_C.BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature");
		
		ULoginWidget_C_BndEvt__DevLogin_K2Node_ComponentBoundEvent_1_OnLogin__DelegateSignature_Params params {};
		params.EMail = EMail;
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoginWidget.LoginWidget_C.OnLoginCompleted_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ApiToken                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULoginWidget_C::OnLoginCompleted_Event_1(const class FString& ApiToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWidget.LoginWidget_C.OnLoginCompleted_Event_1");
		
		ULoginWidget_C_OnLoginCompleted_Event_1_Params params {};
		params.ApiToken = ApiToken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoginWidget.LoginWidget_C.StartBNIDLogin
	 * 		Flags  -> ()
	 */
	void ULoginWidget_C::StartBNIDLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWidget.LoginWidget_C.StartBNIDLogin");
		
		ULoginWidget_C_StartBNIDLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoginWidget.LoginWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void ULoginWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWidget.LoginWidget_C.Construct");
		
		ULoginWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoginWidget.LoginWidget_C.OnLoginSuccess
	 * 		Flags  -> ()
	 */
	void ULoginWidget_C::OnLoginSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWidget.LoginWidget_C.OnLoginSuccess");
		
		ULoginWidget_C_OnLoginSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoginWidget.LoginWidget_C.OnLoginFailure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRetCode                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoginWidget_C::OnLoginFailure(int32_t InRetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWidget.LoginWidget_C.OnLoginFailure");
		
		ULoginWidget_C_OnLoginFailure_Params params {};
		params.InRetCode = InRetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoginWidget.LoginWidget_C.BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_1_BNIDLoginClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULoginWidget_C::BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_1_BNIDLoginClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWidget.LoginWidget_C.BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_1_BNIDLoginClicked__DelegateSignature");
		
		ULoginWidget_C_BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_1_BNIDLoginClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoginWidget.LoginWidget_C.BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_0_DevLoginClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULoginWidget_C::BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_0_DevLoginClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWidget.LoginWidget_C.BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_0_DevLoginClicked__DelegateSignature");
		
		ULoginWidget_C_BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_0_DevLoginClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoginWidget.LoginWidget_C.BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_2_BNOLauncherLoginClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULoginWidget_C::BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_2_BNOLauncherLoginClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWidget.LoginWidget_C.BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_2_BNOLauncherLoginClicked__DelegateSignature");
		
		ULoginWidget_C_BndEvt__LoginTopWidget_K2Node_ComponentBoundEvent_2_BNOLauncherLoginClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoginWidget.LoginWidget_C.ExecuteUbergraph_LoginWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULoginWidget_C::ExecuteUbergraph_LoginWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWidget.LoginWidget_C.ExecuteUbergraph_LoginWidget");
		
		ULoginWidget_C_ExecuteUbergraph_LoginWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LoginWidget.LoginWidget_C.OnLoginCompleted__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ULoginWidget_C::OnLoginCompleted__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LoginWidget.LoginWidget_C.OnLoginCompleted__DelegateSignature");
		
		ULoginWidget_C_OnLoginCompleted__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULoginWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULoginWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoginWidget.LoginWidget_C");
		return ptr;
	}

}


