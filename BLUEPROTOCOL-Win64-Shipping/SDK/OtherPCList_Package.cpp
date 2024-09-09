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
	 * 		Name   -> Function OtherPCList.OtherPCList_C.ClearPCMenu
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::ClearPCMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.ClearPCMenu");
		
		UOtherPCList_C_ClearPCMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.OpenCursorModeToOtherPCMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerCharacter*                          InOtherPC                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bListUpdate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOtherPCList_C::OpenCursorModeToOtherPCMenu(class ASBPlayerCharacter* InOtherPC, bool bListUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.OpenCursorModeToOtherPCMenu");
		
		UOtherPCList_C_OpenCursorModeToOtherPCMenu_Params params {};
		params.InOtherPC = InOtherPC;
		params.bListUpdate = bListUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.UpdateMouseCursorIcon
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::UpdateMouseCursorIcon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.UpdateMouseCursorIcon");
		
		UOtherPCList_C_UpdateMouseCursorIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.UpdateTabKey
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::UpdateTabKey()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.UpdateTabKey");
		
		UOtherPCList_C_UpdateTabKey_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.AllClose
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::AllClose()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.AllClose");
		
		UOtherPCList_C_AllClose_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.Anime_Tab_Menu
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::Anime_Tab_Menu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.Anime_Tab_Menu");
		
		UOtherPCList_C_Anime_Tab_Menu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.Anime_AllOpen
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::Anime_AllOpen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.Anime_AllOpen");
		
		UOtherPCList_C_Anime_AllOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.Anime_Tab_List
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::Anime_Tab_List()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.Anime_Tab_List");
		
		UOtherPCList_C_Anime_Tab_List_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.Anime_Tab
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::Anime_Tab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.Anime_Tab");
		
		UOtherPCList_C_Anime_Tab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.IsRootVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OutVisible                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOtherPCList_C::IsRootVisibility(bool* OutVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.IsRootVisibility");
		
		UOtherPCList_C_IsRootVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutVisible != nullptr)
			*OutVisible = params.OutVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.SetRootVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UOtherPCList_C::SetRootVisibility(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.SetRootVisibility");
		
		UOtherPCList_C_SetRootVisibility_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.CloseMenu
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::CloseMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.CloseMenu");
		
		UOtherPCList_C_CloseMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.Open
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::Open()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.Open");
		
		UOtherPCList_C_Open_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.OnCloseOtherPCMenu
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::OnCloseOtherPCMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.OnCloseOtherPCMenu");
		
		UOtherPCList_C_OnCloseOtherPCMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UOtherPCList_C_BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.InputPadButton
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::InputPadButton()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.InputPadButton");
		
		UOtherPCList_C_InputPadButton_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.Construct
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.Construct");
		
		UOtherPCList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.OnAnimationFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidgetAnimation*                            Animation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCList_C::OnAnimationFinished(class UWidgetAnimation* Animation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.OnAnimationFinished");
		
		UOtherPCList_C_OnAnimationFinished_Params params {};
		params.Animation = Animation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UOtherPCList_C_BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UOtherPCList_C_BndEvt__BtnPlayerList_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ASBPlayerState*                              PlayerState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCList_C::BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature(class ASBPlayerState* PlayerState, const class FName& CharacterId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature");
		
		UOtherPCList_C_BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_4_OnListSelected__DelegateSignature_Params params {};
		params.PlayerState = PlayerState;
		params.CharacterId = CharacterId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_6_OnClickUpdateButton__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_6_OnClickUpdateButton__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_6_OnClickUpdateButton__DelegateSignature");
		
		UOtherPCList_C_BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_6_OnClickUpdateButton__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_8_OnListUpdated__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_8_OnListUpdated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_8_OnListUpdated__DelegateSignature");
		
		UOtherPCList_C_BndEvt__OtherPCList_OtherPCListMain_K2Node_ComponentBoundEvent_8_OnListUpdated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.Close
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.Close");
		
		UOtherPCList_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.OnDirectChatEvent
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::OnDirectChatEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.OnDirectChatEvent");
		
		UOtherPCList_C_OnDirectChatEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.OnPress_Cancel
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::OnPress_Cancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.OnPress_Cancel");
		
		UOtherPCList_C_OnPress_Cancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.Destruct");
		
		UOtherPCList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.ExecuteUbergraph_OtherPCList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UOtherPCList_C::ExecuteUbergraph_OtherPCList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.ExecuteUbergraph_OtherPCList");
		
		UOtherPCList_C_ExecuteUbergraph_OtherPCList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.OnAllClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::OnAllClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.OnAllClose__DelegateSignature");
		
		UOtherPCList_C_OnAllClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.EventButtonClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::EventButtonClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.EventButtonClicked__DelegateSignature");
		
		UOtherPCList_C_EventButtonClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OtherPCList.OtherPCList_C.OnClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UOtherPCList_C::OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OtherPCList.OtherPCList_C.OnClose__DelegateSignature");
		
		UOtherPCList_C_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOtherPCList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOtherPCList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass OtherPCList.OtherPCList_C");
		return ptr;
	}

}


