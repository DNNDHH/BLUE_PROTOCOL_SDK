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
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.InitializeCS
	 * 		Flags  -> ()
	 */
	void UConfigSwicher_C::InitializeCS()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.InitializeCS");
		
		UConfigSwicher_C_InitializeCS_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.GenerateConfigs
	 * 		Flags  -> ()
	 */
	void UConfigSwicher_C::GenerateConfigs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.GenerateConfigs");
		
		UConfigSwicher_C_GenerateConfigs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.YesNoCheckResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsYes                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfigSwicher_C::YesNoCheckResult(bool bIsYes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.YesNoCheckResult");
		
		UConfigSwicher_C_YesNoCheckResult_Params params {};
		params.bIsYes = bIsYes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.Get Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConfigurations                                    NectConfig                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfigSwicher_C::GetWidget(EConfigurations NectConfig, class UWidget** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.Get Widget");
		
		UConfigSwicher_C_GetWidget_Params params {};
		params.NectConfig = NectConfig;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.SetCloseState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Close                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfigSwicher_C::SetCloseState(bool Close)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.SetCloseState");
		
		UConfigSwicher_C_SetCloseState_Params params {};
		params.Close = Close;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.IsClosed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsClosed                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfigSwicher_C::IsClosed(bool* IsClosed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.IsClosed");
		
		UConfigSwicher_C_IsClosed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsClosed != nullptr)
			*IsClosed = params.IsClosed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.IsCommandKeyAsNone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bNone                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfigSwicher_C::IsCommandKeyAsNone(bool* bNone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.IsCommandKeyAsNone");
		
		UConfigSwicher_C_IsCommandKeyAsNone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bNone != nullptr)
			*bNone = params.bNone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.IsChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChanged                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfigSwicher_C::IsChanged(bool* IsChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.IsChanged");
		
		UConfigSwicher_C_IsChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsChanged != nullptr)
			*IsChanged = params.IsChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.Construct
	 * 		Flags  -> ()
	 */
	void UConfigSwicher_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.Construct");
		
		UConfigSwicher_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.ChangeConfigMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EConfigurations                                    Configurations                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfigSwicher_C::ChangeConfigMode(EConfigurations Configurations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.ChangeConfigMode");
		
		UConfigSwicher_C_ChangeConfigMode_Params params {};
		params.Configurations = Configurations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bConfigChanged                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfigSwicher_C::Changed(bool bConfigChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.Changed");
		
		UConfigSwicher_C_Changed_Params params {};
		params.bConfigChanged = bConfigChanged;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.YesNoCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfigSwicher_C::YesNoCheck(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.YesNoCheck");
		
		UConfigSwicher_C_YesNoCheck_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.CheckChanged
	 * 		Flags  -> ()
	 */
	void UConfigSwicher_C::CheckChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.CheckChanged");
		
		UConfigSwicher_C_CheckChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.IsNone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogResult                                      Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfigSwicher_C::IsNone(EDialogResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.IsNone");
		
		UConfigSwicher_C_IsNone_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.LocalSave
	 * 		Flags  -> ()
	 */
	void UConfigSwicher_C::LocalSave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.LocalSave");
		
		UConfigSwicher_C_LocalSave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.BndEvt__KeyConfig_K2Node_ComponentBoundEvent_1_RequestParentFocus__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UConfigSwicher_C::BndEvt__KeyConfig_K2Node_ComponentBoundEvent_1_RequestParentFocus__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.BndEvt__KeyConfig_K2Node_ComponentBoundEvent_1_RequestParentFocus__DelegateSignature");
		
		UConfigSwicher_C_BndEvt__KeyConfig_K2Node_ComponentBoundEvent_1_RequestParentFocus__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.SetTitleMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bTitleMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UConfigSwicher_C::SetTitleMode(bool bTitleMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.SetTitleMode");
		
		UConfigSwicher_C_SetTitleMode_Params params {};
		params.bTitleMode = bTitleMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.ShowError None
	 * 		Flags  -> ()
	 */
	void UConfigSwicher_C::ShowErrorNone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.ShowError None");
		
		UConfigSwicher_C_ShowErrorNone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.ExecuteUbergraph_ConfigSwicher
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UConfigSwicher_C::ExecuteUbergraph_ConfigSwicher(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.ExecuteUbergraph_ConfigSwicher");
		
		UConfigSwicher_C_ExecuteUbergraph_ConfigSwicher_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.OnHasChenged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UConfigSwicher_C::OnHasChenged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.OnHasChenged__DelegateSignature");
		
		UConfigSwicher_C_OnHasChenged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.RequestParentFocus__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UConfigSwicher_C::RequestParentFocus__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.RequestParentFocus__DelegateSignature");
		
		UConfigSwicher_C_RequestParentFocus__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.FailChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UConfigSwicher_C::FailChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.FailChanged__DelegateSignature");
		
		UConfigSwicher_C_FailChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ConfigSwicher.ConfigSwicher_C.SuccessChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UConfigSwicher_C::SuccessChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ConfigSwicher.ConfigSwicher_C.SuccessChanged__DelegateSignature");
		
		UConfigSwicher_C_SuccessChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UConfigSwicher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UConfigSwicher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ConfigSwicher.ConfigSwicher_C");
		return ptr;
	}

}


