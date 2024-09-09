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
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SetCloseState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Close                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionMenu_ConfigMenu_C::SetCloseState(bool Close)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SetCloseState");
		
		UOptionMenu_ConfigMenu_C_SetCloseState_Params params {};
		params.Close = Close;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.IsClosable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsClose                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionMenu_ConfigMenu_C::IsClosable(bool* IsClose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.IsClosable");
		
		UOptionMenu_ConfigMenu_C_IsClosable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsClose != nullptr)
			*IsClose = params.IsClose;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.IsChangeable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsChanged                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionMenu_ConfigMenu_C::IsChangeable(bool* IsChanged)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.IsChangeable");
		
		UOptionMenu_ConfigMenu_C_IsChangeable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsChanged != nullptr)
			*IsChanged = params.IsChanged;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SetSelectedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionMenu_ConfigMenu_C::SetSelectedItem(int32_t InItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SetSelectedItem");
		
		UOptionMenu_ConfigMenu_C_SetSelectedItem_Params params {};
		params.InItemID = InItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UOptionMenu_ConfigMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.Construct");
		
		UOptionMenu_ConfigMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.Init
	 * 		Flags  -> ()
	 */
	void UOptionMenu_ConfigMenu_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.Init");
		
		UOptionMenu_ConfigMenu_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnSaveCharaConfigDelegate_イベント
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionMenu_ConfigMenu_C::OnSaveCharaConfigDelegate_(bool Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnSaveCharaConfigDelegate_イベント");
		
		UOptionMenu_ConfigMenu_C_OnSaveCharaConfigDelegate__Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnSaveCharaConfig
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionMenu_ConfigMenu_C::OnSaveCharaConfig(bool InResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnSaveCharaConfig");
		
		UOptionMenu_ConfigMenu_C_OnSaveCharaConfig_Params params {};
		params.InResult = InResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.ChangeCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            NextId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionMenu_ConfigMenu_C::ChangeCheck(int32_t NextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.ChangeCheck");
		
		UOptionMenu_ConfigMenu_C_ChangeCheck_Params params {};
		params.NextId = NextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SuccessChanged_イベント_1
	 * 		Flags  -> ()
	 */
	void UOptionMenu_ConfigMenu_C::SuccessChanged__1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SuccessChanged_イベント_1");
		
		UOptionMenu_ConfigMenu_C_SuccessChanged__1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.CheckChanged
	 * 		Flags  -> ()
	 */
	void UOptionMenu_ConfigMenu_C::CheckChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.CheckChanged");
		
		UOptionMenu_ConfigMenu_C_CheckChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SuccessChanged_イベント_2
	 * 		Flags  -> ()
	 */
	void UOptionMenu_ConfigMenu_C::SuccessChanged__2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SuccessChanged_イベント_2");
		
		UOptionMenu_ConfigMenu_C_SuccessChanged__2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SelectSubMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ButtonId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionMenu_ConfigMenu_C::SelectSubMenu(int32_t ButtonId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SelectSubMenu");
		
		UOptionMenu_ConfigMenu_C_SelectSubMenu_Params params {};
		params.ButtonId = ButtonId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.FailChanged
	 * 		Flags  -> ()
	 */
	void UOptionMenu_ConfigMenu_C::FailChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.FailChanged");
		
		UOptionMenu_ConfigMenu_C_FailChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.PurgeHudLayoutButton
	 * 		Flags  -> ()
	 */
	void UOptionMenu_ConfigMenu_C::PurgeHudLayoutButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.PurgeHudLayoutButton");
		
		UOptionMenu_ConfigMenu_C_PurgeHudLayoutButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.BndEvt__ConfigSwicher_K2Node_ComponentBoundEvent_2_RequestParentFocus__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionMenu_ConfigMenu_C::BndEvt__ConfigSwicher_K2Node_ComponentBoundEvent_2_RequestParentFocus__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.BndEvt__ConfigSwicher_K2Node_ComponentBoundEvent_2_RequestParentFocus__DelegateSignature");
		
		UOptionMenu_ConfigMenu_C_BndEvt__ConfigSwicher_K2Node_ComponentBoundEvent_2_RequestParentFocus__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnHasChenged_イベント_1
	 * 		Flags  -> ()
	 */
	void UOptionMenu_ConfigMenu_C::OnHasChenged__1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnHasChenged_イベント_1");
		
		UOptionMenu_ConfigMenu_C_OnHasChenged__1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SetTitleMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bTitleMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOptionMenu_ConfigMenu_C::SetTitleMode(bool bTitleMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.SetTitleMode");
		
		UOptionMenu_ConfigMenu_C_SetTitleMode_Params params {};
		params.bTitleMode = bTitleMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UOptionMenu_ConfigMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.Destruct");
		
		UOptionMenu_ConfigMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.UnbindDelegates
	 * 		Flags  -> ()
	 */
	void UOptionMenu_ConfigMenu_C::UnbindDelegates()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.UnbindDelegates");
		
		UOptionMenu_ConfigMenu_C_UnbindDelegates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.Set KeyConfigOpen
	 * 		Flags  -> ()
	 */
	void UOptionMenu_ConfigMenu_C::SetKeyConfigOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.Set KeyConfigOpen");
		
		UOptionMenu_ConfigMenu_C_SetKeyConfigOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.ExecuteUbergraph_OptionMenu_ConfigMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOptionMenu_ConfigMenu_C::ExecuteUbergraph_OptionMenu_ConfigMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.ExecuteUbergraph_OptionMenu_ConfigMenu");
		
		UOptionMenu_ConfigMenu_C_ExecuteUbergraph_OptionMenu_ConfigMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnHasChenged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionMenu_ConfigMenu_C::OnHasChenged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnHasChenged__DelegateSignature");
		
		UOptionMenu_ConfigMenu_C_OnHasChenged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.RequestParentFocus__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionMenu_ConfigMenu_C::RequestParentFocus__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.RequestParentFocus__DelegateSignature");
		
		UOptionMenu_ConfigMenu_C_RequestParentFocus__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnChanged__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOptionMenu_ConfigMenu_C::OnChanged__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C.OnChanged__DelegateSignature");
		
		UOptionMenu_ConfigMenu_C_OnChanged__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOptionMenu_ConfigMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOptionMenu_ConfigMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OptionMenu_ConfigMenu.OptionMenu_ConfigMenu_C");
		return ptr;
	}

}


