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
	 * 		Name   -> Function ChatLogMyMessage.ChatLogMyMessage_C.SetClipboardCopy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCopy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogMyMessage_C::SetClipboardCopy(bool IsCopy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMyMessage.ChatLogMyMessage_C.SetClipboardCopy");
		
		UChatLogMyMessage_C_SetClipboardCopy_Params params {};
		params.IsCopy = IsCopy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMyMessage.ChatLogMyMessage_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UChatLogMyMessage_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMyMessage.ChatLogMyMessage_C.OnMouseButtonDown");
		
		UChatLogMyMessage_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMyMessage.ChatLogMyMessage_C.GetFloatStampPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogMyMessage_C::GetFloatStampPoint(struct FVector2D* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMyMessage.ChatLogMyMessage_C.GetFloatStampPoint");
		
		UChatLogMyMessage_C_GetFloatStampPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMyMessage.ChatLogMyMessage_C.SetStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InStampId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEndInit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UChatLogMyMessage_C::SetStamp(int32_t InStampId, bool IsEndInit, const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMyMessage.ChatLogMyMessage_C.SetStamp");
		
		UChatLogMyMessage_C_SetStamp_Params params {};
		params.InStampId = InStampId;
		params.IsEndInit = IsEndInit;
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMyMessage.ChatLogMyMessage_C.ZeroPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        RetValue                                                   (Parm, OutParm)
	 */
	void UChatLogMyMessage_C::ZeroPadding(int32_t InValue, class FText* RetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMyMessage.ChatLogMyMessage_C.ZeroPadding");
		
		UChatLogMyMessage_C_ZeroPadding_Params params {};
		params.InValue = InValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RetValue != nullptr)
			*RetValue = params.RetValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMyMessage.ChatLogMyMessage_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChatUIMessage                            InMessLog                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsEndInit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsCursorStampHit                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogMyMessage_C::Init(const struct FSBChatUIMessage& InMessLog, bool IsEndInit, bool IsCursorStampHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMyMessage.ChatLogMyMessage_C.Init");
		
		UChatLogMyMessage_C_Init_Params params {};
		params.InMessLog = InMessLog;
		params.IsEndInit = IsEndInit;
		params.IsCursorStampHit = IsCursorStampHit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMyMessage.ChatLogMyMessage_C.DonwloadFaceImage_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UChatLogMyMessage_C::DonwloadFaceImage_Event(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMyMessage.ChatLogMyMessage_C.DonwloadFaceImage_Event");
		
		UChatLogMyMessage_C_DonwloadFaceImage_Event_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMyMessage.ChatLogMyMessage_C.OnTimeEvent
	 * 		Flags  -> ()
	 */
	void UChatLogMyMessage_C::OnTimeEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMyMessage.ChatLogMyMessage_C.OnTimeEvent");
		
		UChatLogMyMessage_C_OnTimeEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMyMessage.ChatLogMyMessage_C.Destruct
	 * 		Flags  -> ()
	 */
	void UChatLogMyMessage_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMyMessage.ChatLogMyMessage_C.Destruct");
		
		UChatLogMyMessage_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMyMessage.ChatLogMyMessage_C.BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogMyMessage_C::BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMyMessage.ChatLogMyMessage_C.BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UChatLogMyMessage_C_BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMyMessage.ChatLogMyMessage_C.BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogMyMessage_C::BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMyMessage.ChatLogMyMessage_C.BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UChatLogMyMessage_C_BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMyMessage.ChatLogMyMessage_C.ClipboardCopy
	 * 		Flags  -> ()
	 */
	void UChatLogMyMessage_C::ClipboardCopy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMyMessage.ChatLogMyMessage_C.ClipboardCopy");
		
		UChatLogMyMessage_C_ClipboardCopy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMyMessage.ChatLogMyMessage_C.BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogMyMessage_C::BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMyMessage.ChatLogMyMessage_C.BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature");
		
		UChatLogMyMessage_C_BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMyMessage.ChatLogMyMessage_C.BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogMyMessage_C::BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMyMessage.ChatLogMyMessage_C.BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature");
		
		UChatLogMyMessage_C_BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMyMessage.ChatLogMyMessage_C.SetWidthOverride
	 * 		Flags  -> ()
	 */
	void UChatLogMyMessage_C::SetWidthOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMyMessage.ChatLogMyMessage_C.SetWidthOverride");
		
		UChatLogMyMessage_C_SetWidthOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogMyMessage.ChatLogMyMessage_C.ExecuteUbergraph_ChatLogMyMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogMyMessage_C::ExecuteUbergraph_ChatLogMyMessage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogMyMessage.ChatLogMyMessage_C.ExecuteUbergraph_ChatLogMyMessage");
		
		UChatLogMyMessage_C_ExecuteUbergraph_ChatLogMyMessage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatLogMyMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatLogMyMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatLogMyMessage.ChatLogMyMessage_C");
		return ptr;
	}

}


