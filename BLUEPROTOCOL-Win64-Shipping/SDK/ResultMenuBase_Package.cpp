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
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.OpenDialogTokenTreasureBoxDrawItems
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::OpenDialogTokenTreasureBoxDrawItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.OpenDialogTokenTreasureBoxDrawItems");
		
		UResultMenuBase_C_OpenDialogTokenTreasureBoxDrawItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.HasTokenTreasureBoxDrawItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               HasItems                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResultMenuBase_C::HasTokenTreasureBoxDrawItems(bool* HasItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.HasTokenTreasureBoxDrawItems");
		
		UResultMenuBase_C_HasTokenTreasureBoxDrawItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HasItems != nullptr)
			*HasItems = params.HasItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.GetDialogDropTreasureTicketReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResultDialog_DropTreasureTicketReward_C*    OutDialog                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultMenuBase_C::GetDialogDropTreasureTicketReward(class UResultDialog_DropTreasureTicketReward_C** OutDialog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.GetDialogDropTreasureTicketReward");
		
		UResultMenuBase_C_GetDialogDropTreasureTicketReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDialog != nullptr)
			*OutDialog = params.OutDialog;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.GetFooter
	 * 		Flags  -> ()
	 */
	class USBResultFooter* UResultMenuBase_C::GetFooter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.GetFooter");
		
		UResultMenuBase_C_GetFooter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.GetResultWidget
	 * 		Flags  -> ()
	 */
	class USBResultPanelBaseWidget* UResultMenuBase_C::GetResultWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.GetResultWidget");
		
		UResultMenuBase_C_GetResultWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.GetResultKeyGuide
	 * 		Flags  -> ()
	 */
	class USBResultKeyGuide* UResultMenuBase_C::GetResultKeyGuide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.GetResultKeyGuide");
		
		UResultMenuBase_C_GetResultKeyGuide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.GetResultShortcutRing
	 * 		Flags  -> ()
	 */
	class USBShortcutRingWidget* UResultMenuBase_C::GetResultShortcutRing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.GetResultShortcutRing");
		
		UResultMenuBase_C_GetResultShortcutRing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.OpenDialogLetter
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::OpenDialogLetter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.OpenDialogLetter");
		
		UResultMenuBase_C_OpenDialogLetter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.SetVisibleMouseCursor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResultMenuBase_C::SetVisibleMouseCursor(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.SetVisibleMouseCursor");
		
		UResultMenuBase_C_SetVisibleMouseCursor_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.ExecuteMenu
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::ExecuteMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.ExecuteMenu");
		
		UResultMenuBase_C_ExecuteMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.ExecuteShortcutRing
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::ExecuteShortcutRing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.ExecuteShortcutRing");
		
		UResultMenuBase_C_ExecuteShortcutRing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.OnEnd
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::OnEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.OnEnd");
		
		UResultMenuBase_C_OnEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.OnTerminate
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::OnTerminate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.OnTerminate");
		
		UResultMenuBase_C_OnTerminate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.OnInitialize
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::OnInitialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.OnInitialize");
		
		UResultMenuBase_C_OnInitialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.IsKeyDownJust
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResultMenuBase_C::IsKeyDownJust(const struct FKey& Key, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.IsKeyDownJust");
		
		UResultMenuBase_C_IsKeyDownJust_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.IsSimpleMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResultMenuBase_C::IsSimpleMode(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.IsSimpleMode");
		
		UResultMenuBase_C_IsSimpleMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.IsKeyDownAll
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FKey>                                InKeyList                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResultMenuBase_C::IsKeyDownAll(TArray<struct FKey>* InKeyList, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.IsKeyDownAll");
		
		UResultMenuBase_C_IsKeyDownAll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InKeyList != nullptr)
			*InKeyList = params.InKeyList;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.GetDialogAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDialog_TacticalAbilityLearning_C*           OutDialog                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultMenuBase_C::GetDialogAbility(class UDialog_TacticalAbilityLearning_C** OutDialog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.GetDialogAbility");
		
		UResultMenuBase_C_GetDialogAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDialog != nullptr)
			*OutDialog = params.OutDialog;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.GetDialogLetter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UResultDialog_Letter_C*                      OutDialog                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultMenuBase_C::GetDialogLetter(class UResultDialog_Letter_C** OutDialog)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.GetDialogLetter");
		
		UResultMenuBase_C_GetDialogLetter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutDialog != nullptr)
			*OutDialog = params.OutDialog;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.GetScreenOverWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetSwitcher*                             OutWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultMenuBase_C::GetScreenOverWidget(class UWidgetSwitcher** OutWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.GetScreenOverWidget");
		
		UResultMenuBase_C_GetScreenOverWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutWidget != nullptr)
			*OutWidget = params.OutWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.SetActiveScreenOver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultMenuBase_C::SetActiveScreenOver(int32_t InIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.SetActiveScreenOver");
		
		UResultMenuBase_C_SetActiveScreenOver_Params params {};
		params.InIndex = InIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.SetVisibleScreenOver
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResultMenuBase_C::SetVisibleScreenOver(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.SetVisibleScreenOver");
		
		UResultMenuBase_C_SetVisibleScreenOver_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.GetKeyMenu
	 * 		Flags  -> ()
	 */
	struct FKey UResultMenuBase_C::GetKeyMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.GetKeyMenu");
		
		UResultMenuBase_C_GetKeyMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.isKeyDownMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResultMenuBase_C::isKeyDownMenu(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.isKeyDownMenu");
		
		UResultMenuBase_C_isKeyDownMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.isKeyDownShortcutRing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UResultMenuBase_C::isKeyDownShortcutRing(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.isKeyDownShortcutRing");
		
		UResultMenuBase_C_isKeyDownShortcutRing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.OpenDialogAbility
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::OpenDialogAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.OpenDialogAbility");
		
		UResultMenuBase_C_OpenDialogAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.OnInitializeKeyGuide
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::OnInitializeKeyGuide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.OnInitializeKeyGuide");
		
		UResultMenuBase_C_OnInitializeKeyGuide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.DisableControl
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::DisableControl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.DisableControl");
		
		UResultMenuBase_C_DisableControl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.EnableControl
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::EnableControl()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.EnableControl");
		
		UResultMenuBase_C_EnableControl_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.OnEventKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UResultMenuBase_C::OnEventKeyDown(const struct FKeyEvent& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.OnEventKeyDown");
		
		UResultMenuBase_C_OnEventKeyDown_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.OnEventKeyUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKeyEvent                                   Event                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UResultMenuBase_C::OnEventKeyUp(const struct FKeyEvent& Event)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.OnEventKeyUp");
		
		UResultMenuBase_C_OnEventKeyUp_Params params {};
		params.Event = Event;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.CustomEvent_1
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::CustomEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.CustomEvent_1");
		
		UResultMenuBase_C_CustomEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.BindShortcutRing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBShortcutRingWidget*                       InShortcutRing                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultMenuBase_C::BindShortcutRing(class USBShortcutRingWidget* InShortcutRing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.BindShortcutRing");
		
		UResultMenuBase_C_BindShortcutRing_Params params {};
		params.InShortcutRing = InShortcutRing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.UnbindShortcutRing
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBShortcutRingWidget*                       InShortcutRing                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultMenuBase_C::UnbindShortcutRing(class USBShortcutRingWidget* InShortcutRing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.UnbindShortcutRing");
		
		UResultMenuBase_C_UnbindShortcutRing_Params params {};
		params.InShortcutRing = InShortcutRing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.EventTelopStart
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::EventTelopStart()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.EventTelopStart");
		
		UResultMenuBase_C_EventTelopStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.EventTelopWait
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::EventTelopWait()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.EventTelopWait");
		
		UResultMenuBase_C_EventTelopWait_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.EventOpen
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::EventOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.EventOpen");
		
		UResultMenuBase_C_EventOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.EventEndOpenResultPanel
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::EventEndOpenResultPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.EventEndOpenResultPanel");
		
		UResultMenuBase_C_EventEndOpenResultPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.EventEndAnimInResultFooter
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::EventEndAnimInResultFooter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.EventEndAnimInResultFooter");
		
		UResultMenuBase_C_EventEndAnimInResultFooter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.EventOpenEnd
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::EventOpenEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.EventOpenEnd");
		
		UResultMenuBase_C_EventOpenEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.EventEndAnimOutDialogAbility
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::EventEndAnimOutDialogAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.EventEndAnimOutDialogAbility");
		
		UResultMenuBase_C_EventEndAnimOutDialogAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.EventClose
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::EventClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.EventClose");
		
		UResultMenuBase_C_EventClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.EventEndCloseResultPanel
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::EventEndCloseResultPanel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.EventEndCloseResultPanel");
		
		UResultMenuBase_C_EventEndCloseResultPanel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.EventEndAnimOutDialogLetter
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::EventEndAnimOutDialogLetter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.EventEndAnimOutDialogLetter");
		
		UResultMenuBase_C_EventEndAnimOutDialogLetter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.EventEndAnimOutResultFooter
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::EventEndAnimOutResultFooter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.EventEndAnimOutResultFooter");
		
		UResultMenuBase_C_EventEndAnimOutResultFooter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.EventCloseEnd
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::EventCloseEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.EventCloseEnd");
		
		UResultMenuBase_C_EventCloseEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.EventEndPendingReward
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::EventEndPendingReward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.EventEndPendingReward");
		
		UResultMenuBase_C_EventEndPendingReward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.EventEndUseTokenTreasureBoxDrawItems
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::EventEndUseTokenTreasureBoxDrawItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.EventEndUseTokenTreasureBoxDrawItems");
		
		UResultMenuBase_C_EventEndUseTokenTreasureBoxDrawItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.EventEndAnimOutDialogTokenTreasureTickerDrawItems
	 * 		Flags  -> ()
	 */
	void UResultMenuBase_C::EventEndAnimOutDialogTokenTreasureTickerDrawItems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.EventEndAnimOutDialogTokenTreasureTickerDrawItems");
		
		UResultMenuBase_C_EventEndAnimOutDialogTokenTreasureTickerDrawItems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ResultMenuBase.ResultMenuBase_C.ExecuteUbergraph_ResultMenuBase
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UResultMenuBase_C::ExecuteUbergraph_ResultMenuBase(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ResultMenuBase.ResultMenuBase_C.ExecuteUbergraph_ResultMenuBase");
		
		UResultMenuBase_C_ExecuteUbergraph_ResultMenuBase_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UResultMenuBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UResultMenuBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ResultMenuBase.ResultMenuBase_C");
		return ptr;
	}

}


