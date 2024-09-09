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
	 * 		Name   -> Function UMG_Login.UMG_Login_C.SaveLoginCache
	 * 		Flags  -> ()
	 */
	void UUMG_Login_C::SaveLoginCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_Login.UMG_Login_C.SaveLoginCache");
		
		UUMG_Login_C_SaveLoginCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_Login.UMG_Login_C.HideWindow
	 * 		Flags  -> ()
	 */
	void UUMG_Login_C::HideWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_Login.UMG_Login_C.HideWindow");
		
		UUMG_Login_C_HideWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_Login.UMG_Login_C.ShowWindow
	 * 		Flags  -> ()
	 */
	void UUMG_Login_C::ShowWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_Login.UMG_Login_C.ShowWindow");
		
		UUMG_Login_C_ShowWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_Login.UMG_Login_C.LoadLoginCache
	 * 		Flags  -> ()
	 */
	void UUMG_Login_C::LoadLoginCache()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_Login.UMG_Login_C.LoadLoginCache");
		
		UUMG_Login_C_LoadLoginCache_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_Login.UMG_Login_C.Init
	 * 		Flags  -> ()
	 */
	void UUMG_Login_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_Login.UMG_Login_C.Init");
		
		UUMG_Login_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_Login.UMG_Login_C.SetSaveData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EMail                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Password                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               RememberMe                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_Login_C::SetSaveData(const class FString& EMail, const class FString& Password, bool RememberMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_Login.UMG_Login_C.SetSaveData");
		
		UUMG_Login_C_SetSaveData_Params params {};
		params.EMail = EMail;
		params.Password = Password;
		params.RememberMe = RememberMe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_Login.UMG_Login_C.GetSaveData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EMail                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Password                                                   (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               RemenberMe                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUMG_Login_C::GetSaveData(class FString* EMail, class FString* Password, bool* RemenberMe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_Login.UMG_Login_C.GetSaveData");
		
		UUMG_Login_C_GetSaveData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (EMail != nullptr)
			*EMail = params.EMail;
		if (Password != nullptr)
			*Password = params.Password;
		if (RemenberMe != nullptr)
			*RemenberMe = params.RemenberMe;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_Login.UMG_Login_C.ShowErrorDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        ErrorText                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUMG_Login_C::ShowErrorDialog(const class FText& ErrorText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_Login.UMG_Login_C.ShowErrorDialog");
		
		UUMG_Login_C_ShowErrorDialog_Params params {};
		params.ErrorText = ErrorText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_Login.UMG_Login_C.BndEvt__BtnLogin_K2Node_ComponentBoundEvent_275_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_Login_C::BndEvt__BtnLogin_K2Node_ComponentBoundEvent_275_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_Login.UMG_Login_C.BndEvt__BtnLogin_K2Node_ComponentBoundEvent_275_EventOnClicked__DelegateSignature");
		
		UUMG_Login_C_BndEvt__BtnLogin_K2Node_ComponentBoundEvent_275_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_Login.UMG_Login_C.BndEvt__BtnRegister_K2Node_ComponentBoundEvent_276_EventOnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_Login_C::BndEvt__BtnRegister_K2Node_ComponentBoundEvent_276_EventOnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_Login.UMG_Login_C.BndEvt__BtnRegister_K2Node_ComponentBoundEvent_276_EventOnClicked__DelegateSignature");
		
		UUMG_Login_C_BndEvt__BtnRegister_K2Node_ComponentBoundEvent_276_EventOnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_Login.UMG_Login_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_Login_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_Login.UMG_Login_C.OnAnimationFinished");
		
		UUMG_Login_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_Login.UMG_Login_C.Construct
	 * 		Flags  -> ()
	 */
	void UUMG_Login_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_Login.UMG_Login_C.Construct");
		
		UUMG_Login_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_Login.UMG_Login_C.ExecuteUbergraph_UMG_Login
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUMG_Login_C::ExecuteUbergraph_UMG_Login(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_Login.UMG_Login_C.ExecuteUbergraph_UMG_Login");
		
		UUMG_Login_C_ExecuteUbergraph_UMG_Login_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_Login.UMG_Login_C.OnRegister__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUMG_Login_C::OnRegister__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_Login.UMG_Login_C.OnRegister__DelegateSignature");
		
		UUMG_Login_C_OnRegister__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UMG_Login.UMG_Login_C.OnLogin__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      EMail                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Password                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUMG_Login_C::OnLogin__DelegateSignature(const class FString& EMail, const class FString& Password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UMG_Login.UMG_Login_C.OnLogin__DelegateSignature");
		
		UUMG_Login_C_OnLogin__DelegateSignature_Params params {};
		params.EMail = EMail;
		params.Password = Password;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUMG_Login_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUMG_Login_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UMG_Login.UMG_Login_C");
		return ptr;
	}

}


