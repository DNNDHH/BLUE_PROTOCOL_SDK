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
	 * 		Name   -> Function ChatWindowTypeItem.ChatWindowTypeItem_C.SetDirectChatData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBDirectChatSenderLogData                  InSenderData                                               (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UChatWindowTypeItem_C::SetDirectChatData(const struct FSBDirectChatSenderLogData& InSenderData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindowTypeItem.ChatWindowTypeItem_C.SetDirectChatData");
		
		UChatWindowTypeItem_C_SetDirectChatData_Params params {};
		params.InSenderData = InSenderData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindowTypeItem.ChatWindowTypeItem_C.GetTypeWindowPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   Position                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatWindowTypeItem_C::GetTypeWindowPosition(struct FVector2D* Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindowTypeItem.ChatWindowTypeItem_C.GetTypeWindowPosition");
		
		UChatWindowTypeItem_C_GetTypeWindowPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Position != nullptr)
			*Position = params.Position;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindowTypeItem.ChatWindowTypeItem_C.SetType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogType                                     InChatLogType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatWindowTypeItem_C::SetType(ESBChatLogType InChatLogType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindowTypeItem.ChatWindowTypeItem_C.SetType");
		
		UChatWindowTypeItem_C_SetType_Params params {};
		params.InChatLogType = InChatLogType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindowTypeItem.ChatWindowTypeItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatWindowTypeItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindowTypeItem.ChatWindowTypeItem_C.PreConstruct");
		
		UChatWindowTypeItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindowTypeItem.ChatWindowTypeItem_C.BndEvt__ChatWindowTypeItem_Btn1_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatWindowTypeItem_C::BndEvt__ChatWindowTypeItem_Btn1_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindowTypeItem.ChatWindowTypeItem_C.BndEvt__ChatWindowTypeItem_Btn1_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature");
		
		UChatWindowTypeItem_C_BndEvt__ChatWindowTypeItem_Btn1_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindowTypeItem.ChatWindowTypeItem_C.BndEvt__ChatWindowTypeItem_Btn1_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatWindowTypeItem_C::BndEvt__ChatWindowTypeItem_Btn1_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindowTypeItem.ChatWindowTypeItem_C.BndEvt__ChatWindowTypeItem_Btn1_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature");
		
		UChatWindowTypeItem_C_BndEvt__ChatWindowTypeItem_Btn1_1_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindowTypeItem.ChatWindowTypeItem_C.ExecuteUbergraph_ChatWindowTypeItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatWindowTypeItem_C::ExecuteUbergraph_ChatWindowTypeItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindowTypeItem.ChatWindowTypeItem_C.ExecuteUbergraph_ChatWindowTypeItem");
		
		UChatWindowTypeItem_C_ExecuteUbergraph_ChatWindowTypeItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatWindowTypeItem.ChatWindowTypeItem_C.EventBtnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UChatWindowTypeItem_C*                       TypeItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatWindowTypeItem_C::EventBtnClicked__DelegateSignature(class UChatWindowTypeItem_C* TypeItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatWindowTypeItem.ChatWindowTypeItem_C.EventBtnClicked__DelegateSignature");
		
		UChatWindowTypeItem_C_EventBtnClicked__DelegateSignature_Params params {};
		params.TypeItem = TypeItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatWindowTypeItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatWindowTypeItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatWindowTypeItem.ChatWindowTypeItem_C");
		return ptr;
	}

}


