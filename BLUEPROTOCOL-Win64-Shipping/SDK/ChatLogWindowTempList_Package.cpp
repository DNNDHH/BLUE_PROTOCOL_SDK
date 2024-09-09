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
	 * 		Name   -> Function ChatLogWindowTempList.ChatLogWindowTempList_C.UpdatePopTime
	 * 		Flags  -> ()
	 */
	void UChatLogWindowTempList_C::UpdatePopTime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowTempList.ChatLogWindowTempList_C.UpdatePopTime");
		
		UChatLogWindowTempList_C_UpdatePopTime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetUnreadIconVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowTempList_C::SetUnreadIconVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetUnreadIconVisible");
		
		UChatLogWindowTempList_C_SetUnreadIconVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowTempList.ChatLogWindowTempList_C.IsVisibleChat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChatUIMessage                            InChatMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsVisible                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowTempList_C::IsVisibleChat(const struct FSBChatUIMessage& InChatMessage, bool* IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowTempList.ChatLogWindowTempList_C.IsVisibleChat");
		
		UChatLogWindowTempList_C_IsVisibleChat_Params params {};
		params.InChatMessage = InChatMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsVisible != nullptr)
			*IsVisible = params.IsVisible;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowTempList_C::SetVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetVisible");
		
		UChatLogWindowTempList_C_SetVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowTempList.ChatLogWindowTempList_C.CreateMessageEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChatUIMessage                            InMess                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bRecieve                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowTempList_C::CreateMessageEntry(const struct FSBChatUIMessage& InMess, bool bRecieve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowTempList.ChatLogWindowTempList_C.CreateMessageEntry");
		
		UChatLogWindowTempList_C_CreateMessageEntry_Params params {};
		params.InMess = InMess;
		params.bRecieve = bRecieve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowTempList.ChatLogWindowTempList_C.ClearLogList
	 * 		Flags  -> ()
	 */
	void UChatLogWindowTempList_C::ClearLogList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowTempList.ChatLogWindowTempList_C.ClearLogList");
		
		UChatLogWindowTempList_C_ClearLogList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetWindowSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogWindowTempList_C::SetWindowSize(const struct FVector2D& InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetWindowSize");
		
		UChatLogWindowTempList_C_SetWindowSize_Params params {};
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowTempList.ChatLogWindowTempList_C.GetWindowSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   retSize                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogWindowTempList_C::GetWindowSize(struct FVector2D* retSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowTempList.ChatLogWindowTempList_C.GetWindowSize");
		
		UChatLogWindowTempList_C_GetWindowSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (retSize != nullptr)
			*retSize = params.retSize;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetEditMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InEdit                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowTempList_C::SetEditMode(bool InEdit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowTempList.ChatLogWindowTempList_C.SetEditMode");
		
		UChatLogWindowTempList_C_SetEditMode_Params params {};
		params.InEdit = InEdit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowTempList.ChatLogWindowTempList_C.HideWindow
	 * 		Flags  -> ()
	 */
	void UChatLogWindowTempList_C::HideWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowTempList.ChatLogWindowTempList_C.HideWindow");
		
		UChatLogWindowTempList_C_HideWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowTempList.ChatLogWindowTempList_C.ShowWindow
	 * 		Flags  -> ()
	 */
	void UChatLogWindowTempList_C::ShowWindow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowTempList.ChatLogWindowTempList_C.ShowWindow");
		
		UChatLogWindowTempList_C_ShowWindow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowTempList.ChatLogWindowTempList_C.Construct
	 * 		Flags  -> ()
	 */
	void UChatLogWindowTempList_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowTempList.ChatLogWindowTempList_C.Construct");
		
		UChatLogWindowTempList_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowTempList.ChatLogWindowTempList_C.OnCreateMessage_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChatUIMessage                            InMess                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bRecieve                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogWindowTempList_C::OnCreateMessage_Event(const struct FSBChatUIMessage& InMess, bool bRecieve)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowTempList.ChatLogWindowTempList_C.OnCreateMessage_Event");
		
		UChatLogWindowTempList_C_OnCreateMessage_Event_Params params {};
		params.InMess = InMess;
		params.bRecieve = bRecieve;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowTempList.ChatLogWindowTempList_C.OnUpdateFilterType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogWindowTempList_C::OnUpdateFilterType(int32_t InType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowTempList.ChatLogWindowTempList_C.OnUpdateFilterType");
		
		UChatLogWindowTempList_C_OnUpdateFilterType_Params params {};
		params.InType = InType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowTempList.ChatLogWindowTempList_C.OnPopTimeEnd
	 * 		Flags  -> ()
	 */
	void UChatLogWindowTempList_C::OnPopTimeEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowTempList.ChatLogWindowTempList_C.OnPopTimeEnd");
		
		UChatLogWindowTempList_C_OnPopTimeEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowTempList.ChatLogWindowTempList_C.BndEvt__LogView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogWindowTempList_C::BndEvt__LogView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowTempList.ChatLogWindowTempList_C.BndEvt__LogView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature");
		
		UChatLogWindowTempList_C_BndEvt__LogView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowTempList.ChatLogWindowTempList_C.Destruct
	 * 		Flags  -> ()
	 */
	void UChatLogWindowTempList_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowTempList.ChatLogWindowTempList_C.Destruct");
		
		UChatLogWindowTempList_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowTempList.ChatLogWindowTempList_C.OnLogWindowTempVisibleDelegate_Event
	 * 		Flags  -> ()
	 */
	void UChatLogWindowTempList_C::OnLogWindowTempVisibleDelegate_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowTempList.ChatLogWindowTempList_C.OnLogWindowTempVisibleDelegate_Event");
		
		UChatLogWindowTempList_C_OnLogWindowTempVisibleDelegate_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogWindowTempList.ChatLogWindowTempList_C.ExecuteUbergraph_ChatLogWindowTempList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogWindowTempList_C::ExecuteUbergraph_ChatLogWindowTempList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogWindowTempList.ChatLogWindowTempList_C.ExecuteUbergraph_ChatLogWindowTempList");
		
		UChatLogWindowTempList_C_ExecuteUbergraph_ChatLogWindowTempList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatLogWindowTempList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatLogWindowTempList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatLogWindowTempList.ChatLogWindowTempList_C");
		return ptr;
	}

}


