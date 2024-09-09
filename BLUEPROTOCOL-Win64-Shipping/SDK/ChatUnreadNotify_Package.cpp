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
	 * 		Name   -> Function ChatUnreadNotify.ChatUnreadNotify_C.InitChatLogData
	 * 		Flags  -> ()
	 */
	void UChatUnreadNotify_C::InitChatLogData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatUnreadNotify.ChatUnreadNotify_C.InitChatLogData");
		
		UChatUnreadNotify_C_InitChatLogData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatUnreadNotify.ChatUnreadNotify_C.CheckMessageWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      inString                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               IsEllipsisWidthSize                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Exceeded                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatUnreadNotify_C::CheckMessageWidth(const class FString& inString, bool IsEllipsisWidthSize, bool* Exceeded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatUnreadNotify.ChatUnreadNotify_C.CheckMessageWidth");
		
		UChatUnreadNotify_C_CheckMessageWidth_Params params {};
		params.inString = inString;
		params.IsEllipsisWidthSize = IsEllipsisWidthSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Exceeded != nullptr)
			*Exceeded = params.Exceeded;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatUnreadNotify.ChatUnreadNotify_C.SetTextOverflowEllipsis
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InStr                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UChatUnreadNotify_C::SetTextOverflowEllipsis(const class FString& InStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatUnreadNotify.ChatUnreadNotify_C.SetTextOverflowEllipsis");
		
		UChatUnreadNotify_C_SetTextOverflowEllipsis_Params params {};
		params.InStr = InStr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatUnreadNotify.ChatUnreadNotify_C.VisibleCheck
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChatUIMessage                            ChatUIMessage                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bResult                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatUnreadNotify_C::VisibleCheck(const struct FSBChatUIMessage& ChatUIMessage, bool* bResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatUnreadNotify.ChatUnreadNotify_C.VisibleCheck");
		
		UChatUnreadNotify_C_VisibleCheck_Params params {};
		params.ChatUIMessage = ChatUIMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bResult != nullptr)
			*bResult = params.bResult;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatUnreadNotify.ChatUnreadNotify_C.UpdateFilter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogWindowSlot                               Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatUnreadNotify_C::UpdateFilter(ESBChatLogWindowSlot Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatUnreadNotify.ChatUnreadNotify_C.UpdateFilter");
		
		UChatUnreadNotify_C_UpdateFilter_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatUnreadNotify.ChatUnreadNotify_C.SetMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChatUIMessage                            InChatUIMessage                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UChatUnreadNotify_C::SetMessage(const struct FSBChatUIMessage& InChatUIMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatUnreadNotify.ChatUnreadNotify_C.SetMessage");
		
		UChatUnreadNotify_C_SetMessage_Params params {};
		params.InChatUIMessage = InChatUIMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatUnreadNotify.ChatUnreadNotify_C.Construct
	 * 		Flags  -> ()
	 */
	void UChatUnreadNotify_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatUnreadNotify.ChatUnreadNotify_C.Construct");
		
		UChatUnreadNotify_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatUnreadNotify.ChatUnreadNotify_C.DownLoadFaceImage_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UChatUnreadNotify_C::DownLoadFaceImage_Event(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatUnreadNotify.ChatUnreadNotify_C.DownLoadFaceImage_Event");
		
		UChatUnreadNotify_C_DownLoadFaceImage_Event_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatUnreadNotify.ChatUnreadNotify_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1
	 * 		Flags  -> ()
	 */
	void UChatUnreadNotify_C::WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatUnreadNotify.ChatUnreadNotify_C.WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1");
		
		UChatUnreadNotify_C_WidgetAnimationEvt_AnimInOut_K2Node_WidgetAnimationEvent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatUnreadNotify.ChatUnreadNotify_C.PlayAnim
	 * 		Flags  -> ()
	 */
	void UChatUnreadNotify_C::PlayAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatUnreadNotify.ChatUnreadNotify_C.PlayAnim");
		
		UChatUnreadNotify_C_PlayAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatUnreadNotify.ChatUnreadNotify_C.Destruct
	 * 		Flags  -> ()
	 */
	void UChatUnreadNotify_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatUnreadNotify.ChatUnreadNotify_C.Destruct");
		
		UChatUnreadNotify_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatUnreadNotify.ChatUnreadNotify_C.OnReciveMessageToUnreadNotify_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBChatLogWindowSlot                               Slot                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBChatUIMessage                            UIMessage                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UChatUnreadNotify_C::OnReciveMessageToUnreadNotify_Event(ESBChatLogWindowSlot Slot, const struct FSBChatUIMessage& UIMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatUnreadNotify.ChatUnreadNotify_C.OnReciveMessageToUnreadNotify_Event");
		
		UChatUnreadNotify_C_OnReciveMessageToUnreadNotify_Event_Params params {};
		params.Slot = Slot;
		params.UIMessage = UIMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatUnreadNotify.ChatUnreadNotify_C.OnReceiveMessageDelegate_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBChatMessage*                              Message                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBChatUIMessage                            Mess                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UChatUnreadNotify_C::OnReceiveMessageDelegate_Event(class USBChatMessage* Message, const struct FSBChatUIMessage& Mess)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatUnreadNotify.ChatUnreadNotify_C.OnReceiveMessageDelegate_Event");
		
		UChatUnreadNotify_C_OnReceiveMessageDelegate_Event_Params params {};
		params.Message = Message;
		params.Mess = Mess;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatUnreadNotify.ChatUnreadNotify_C.ExecuteUbergraph_ChatUnreadNotify
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatUnreadNotify_C::ExecuteUbergraph_ChatUnreadNotify(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatUnreadNotify.ChatUnreadNotify_C.ExecuteUbergraph_ChatUnreadNotify");
		
		UChatUnreadNotify_C_ExecuteUbergraph_ChatUnreadNotify_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatUnreadNotify_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatUnreadNotify_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatUnreadNotify.ChatUnreadNotify_C");
		return ptr;
	}

}


