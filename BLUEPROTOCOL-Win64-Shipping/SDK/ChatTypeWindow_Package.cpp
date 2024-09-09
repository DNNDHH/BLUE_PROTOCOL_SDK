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
	 * 		Name   -> Function ChatTypeWindow.ChatTypeWindow_C.InitDirectChatItem
	 * 		Flags  -> ()
	 */
	void UChatTypeWindow_C::InitDirectChatItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatTypeWindow.ChatTypeWindow_C.InitDirectChatItem");
		
		UChatTypeWindow_C_InitDirectChatItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatTypeWindow.ChatTypeWindow_C.IsEndAnimOut
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnd                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatTypeWindow_C::IsEndAnimOut(bool* IsEnd)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatTypeWindow.ChatTypeWindow_C.IsEndAnimOut");
		
		UChatTypeWindow_C_IsEndAnimOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEnd != nullptr)
			*IsEnd = params.IsEnd;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatTypeWindow.ChatTypeWindow_C.CalcPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatTypeWindow_C::CalcPosition(struct FVector2D* Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatTypeWindow.ChatTypeWindow_C.CalcPosition");
		
		UChatTypeWindow_C_CalcPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Position != nullptr)
			*Position = params.Position;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatTypeWindow.ChatTypeWindow_C.EndChat
	 * 		Flags  -> ()
	 */
	void UChatTypeWindow_C::EndChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatTypeWindow.ChatTypeWindow_C.EndChat");
		
		UChatTypeWindow_C_EndChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatTypeWindow.ChatTypeWindow_C.HideWindow
	 * 		Flags  -> ()
	 */
	void UChatTypeWindow_C::HideWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatTypeWindow.ChatTypeWindow_C.HideWindow");
		
		UChatTypeWindow_C_HideWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatTypeWindow.ChatTypeWindow_C.ShowWindow
	 * 		Flags  -> ()
	 */
	void UChatTypeWindow_C::ShowWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatTypeWindow.ChatTypeWindow_C.ShowWindow");
		
		UChatTypeWindow_C_ShowWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatTypeWindow.ChatTypeWindow_C.Construct
	 * 		Flags  -> ()
	 */
	void UChatTypeWindow_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatTypeWindow.ChatTypeWindow_C.Construct");
		
		UChatTypeWindow_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UChatWindowTypeItem_C*                       TypeItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatTypeWindow_C::BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature");
		
		UChatTypeWindow_C_BndEvt__ChatWindowTypeItem1_K2Node_ComponentBoundEvent_8_EventBtnClicked__DelegateSignature_Params params {};
		params.TypeItem = TypeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UChatWindowTypeItem_C*                       TypeItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatTypeWindow_C::BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature");
		
		UChatTypeWindow_C_BndEvt__ChatWindowTypeItem2_K2Node_ComponentBoundEvent_11_EventBtnClicked__DelegateSignature_Params params {};
		params.TypeItem = TypeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UChatWindowTypeItem_C*                       TypeItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatTypeWindow_C::BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature");
		
		UChatTypeWindow_C_BndEvt__ChatWindowTypeItem3_K2Node_ComponentBoundEvent_13_EventBtnClicked__DelegateSignature_Params params {};
		params.TypeItem = TypeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UChatWindowTypeItem_C*                       TypeItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatTypeWindow_C::BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature");
		
		UChatTypeWindow_C_BndEvt__ChatWindowTypeItem4_K2Node_ComponentBoundEvent_16_EventBtnClicked__DelegateSignature_Params params {};
		params.TypeItem = TypeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatTypeWindow.ChatTypeWindow_C.OnAnimationFinished_イベント_1
	 * 		Flags  -> ()
	 */
	void UChatTypeWindow_C::OnAnimationFinished__1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatTypeWindow.ChatTypeWindow_C.OnAnimationFinished_イベント_1");
		
		UChatTypeWindow_C_OnAnimationFinished__1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatTypeWindow.ChatTypeWindow_C.OnClickedDirectChatItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UChatWindowTypeItem_C*                       TypeItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatTypeWindow_C::OnClickedDirectChatItem(class UChatWindowTypeItem_C* TypeItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatTypeWindow.ChatTypeWindow_C.OnClickedDirectChatItem");
		
		UChatTypeWindow_C_OnClickedDirectChatItem_Params params {};
		params.TypeItem = TypeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatTypeWindow.ChatTypeWindow_C.OnPressCancel
	 * 		Flags  -> ()
	 */
	void UChatTypeWindow_C::OnPressCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatTypeWindow.ChatTypeWindow_C.OnPressCancel");
		
		UChatTypeWindow_C_OnPressCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatTypeWindow_Button_Hit_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatTypeWindow_C::BndEvt__ChatTypeWindow_Button_Hit_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatTypeWindow.ChatTypeWindow_C.BndEvt__ChatTypeWindow_Button_Hit_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UChatTypeWindow_C_BndEvt__ChatTypeWindow_Button_Hit_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatTypeWindow.ChatTypeWindow_C.ExecuteUbergraph_ChatTypeWindow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatTypeWindow_C::ExecuteUbergraph_ChatTypeWindow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatTypeWindow.ChatTypeWindow_C.ExecuteUbergraph_ChatTypeWindow");
		
		UChatTypeWindow_C_ExecuteUbergraph_ChatTypeWindow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatTypeWindow.ChatTypeWindow_C.EventTypeSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogType                                     SelectedType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatTypeWindow_C::EventTypeSelected__DelegateSignature(ESBChatLogType SelectedType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatTypeWindow.ChatTypeWindow_C.EventTypeSelected__DelegateSignature");
		
		UChatTypeWindow_C_EventTypeSelected__DelegateSignature_Params params {};
		params.SelectedType = SelectedType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatTypeWindow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatTypeWindow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatTypeWindow.ChatTypeWindow_C");
		return ptr;
	}

}


