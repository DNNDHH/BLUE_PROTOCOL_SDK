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
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.Is Enable Emote Icon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        InputPin                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsEnable                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOtherPCEmoteMenu_C::IsEnableEmoteIcon(const class FName& InputPin, bool* bIsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.Is Enable Emote Icon");
		
		UOtherPCEmoteMenu_C_IsEnableEmoteIcon_Params params {};
		params.InputPin = InputPin;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsEnable != nullptr)
			*bIsEnable = params.bIsEnable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.UpdateEmoteIconEnable
	 * 		Flags  -> ()
	 */
	void UOtherPCEmoteMenu_C::UpdateEmoteIconEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.UpdateEmoteIconEnable");
		
		UOtherPCEmoteMenu_C_UpdateEmoteIconEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.GetPlayerCharacter
	 * 		Flags  -> ()
	 */
	class ASBPlayerCharacter* UOtherPCEmoteMenu_C::GetPlayerCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.GetPlayerCharacter");
		
		UOtherPCEmoteMenu_C_GetPlayerCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.SetRootVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOtherPCEmoteMenu_C::SetRootVisible(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.SetRootVisible");
		
		UOtherPCEmoteMenu_C_SetRootVisible_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.ClearEmotionSlot
	 * 		Flags  -> ()
	 */
	void UOtherPCEmoteMenu_C::ClearEmotionSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.ClearEmotionSlot");
		
		UOtherPCEmoteMenu_C_ClearEmotionSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.CreateEmptySlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  InGridPanel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InSlotCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCEmoteMenu_C::CreateEmptySlot(class UGridPanel* InGridPanel, int32_t InSlotCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.CreateEmptySlot");
		
		UOtherPCEmoteMenu_C_CreateEmptySlot_Params params {};
		params.InGridPanel = InGridPanel;
		params.InSlotCount = InSlotCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.CloseMenu
	 * 		Flags  -> ()
	 */
	void UOtherPCEmoteMenu_C::CloseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.CloseMenu");
		
		UOtherPCEmoteMenu_C_CloseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnRequestTutorialHelp
	 * 		Flags  -> ()
	 */
	void UOtherPCEmoteMenu_C::OnRequestTutorialHelp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnRequestTutorialHelp");
		
		UOtherPCEmoteMenu_C_OnRequestTutorialHelp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnTutorialHelp_Close
	 * 		Flags  -> ()
	 */
	void UOtherPCEmoteMenu_C::OnTutorialHelp_Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnTutorialHelp_Close");
		
		UOtherPCEmoteMenu_C_OnTutorialHelp_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UOtherPCEmoteMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.Construct");
		
		UOtherPCEmoteMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UOtherPCEmoteMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.Destruct");
		
		UOtherPCEmoteMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnRefresh
	 * 		Flags  -> ()
	 */
	void UOtherPCEmoteMenu_C::OnRefresh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnRefresh");
		
		UOtherPCEmoteMenu_C_OnRefresh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEmotionMenu_Item_C*                         InSelectedItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCEmoteMenu_C::OnSelect(class UEmotionMenu_Item_C* InSelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnSelect");
		
		UOtherPCEmoteMenu_C_OnSelect_Params params {};
		params.InSelectedItem = InSelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCEmoteMenu_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnAnimationFinished");
		
		UOtherPCEmoteMenu_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UOtherPCEmoteMenu_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnPress_Cancel");
		
		UOtherPCEmoteMenu_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnJankenUIDelegate_Event_1
	 * 		Flags  -> ()
	 */
	void UOtherPCEmoteMenu_C::OnJankenUIDelegate_Event_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnJankenUIDelegate_Event_1");
		
		UOtherPCEmoteMenu_C_OnJankenUIDelegate_Event_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.ForcedClose
	 * 		Flags  -> ()
	 */
	void UOtherPCEmoteMenu_C::ForcedClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.ForcedClose");
		
		UOtherPCEmoteMenu_C_ForcedClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.UpdateEmotionList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOtherPCEmoteMenu_C::UpdateEmotionList(bool bInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.UpdateEmotionList");
		
		UOtherPCEmoteMenu_C_UpdateEmotionList_Params params {};
		params.bInit = bInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.BndEvt__OtherPCEmoteMenu_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCEmoteMenu_C::BndEvt__OtherPCEmoteMenu_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.BndEvt__OtherPCEmoteMenu_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature");
		
		UOtherPCEmoteMenu_C_BndEvt__OtherPCEmoteMenu_CmnClose01_K2Node_ComponentBoundEvent_0_OnClosed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.BndEvt__OtherPCEmoteMenu_SBButtonFullScreen_C_35_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCEmoteMenu_C::BndEvt__OtherPCEmoteMenu_SBButtonFullScreen_C_35_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.BndEvt__OtherPCEmoteMenu_SBButtonFullScreen_C_35_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UOtherPCEmoteMenu_C_BndEvt__OtherPCEmoteMenu_SBButtonFullScreen_C_35_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.EmoteListUpdate
	 * 		Flags  -> ()
	 */
	void UOtherPCEmoteMenu_C::EmoteListUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.EmoteListUpdate");
		
		UOtherPCEmoteMenu_C_EmoteListUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.ExecuteUbergraph_OtherPCEmoteMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCEmoteMenu_C::ExecuteUbergraph_OtherPCEmoteMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.ExecuteUbergraph_OtherPCEmoteMenu");
		
		UOtherPCEmoteMenu_C_ExecuteUbergraph_OtherPCEmoteMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCEmoteMenu_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCEmoteMenu.OtherPCEmoteMenu_C.OnClose__DelegateSignature");
		
		UOtherPCEmoteMenu_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOtherPCEmoteMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOtherPCEmoteMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OtherPCEmoteMenu.OtherPCEmoteMenu_C");
		return ptr;
	}

}


