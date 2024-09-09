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
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.SetClipboardCopy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCopy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogOtherPlayerMessage_C::SetClipboardCopy(bool IsCopy)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.SetClipboardCopy");
		
		UChatLogOtherPlayerMessage_C_SetClipboardCopy_Params params {};
		params.IsCopy = IsCopy;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UChatLogOtherPlayerMessage_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnMouseButtonDown");
		
		UChatLogOtherPlayerMessage_C_OnMouseButtonDown_Params params {};
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
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.GetFloatStampPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogOtherPlayerMessage_C::GetFloatStampPoint(struct FVector2D* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.GetFloatStampPoint");
		
		UChatLogOtherPlayerMessage_C_GetFloatStampPoint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.SetStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InStampId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEndInit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogOtherPlayerMessage_C::SetStamp(int32_t InStampId, bool IsEndInit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.SetStamp");
		
		UChatLogOtherPlayerMessage_C_SetStamp_Params params {};
		params.InStampId = InStampId;
		params.IsEndInit = IsEndInit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.ZeroPadding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InValue                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        RetValue                                                   (Parm, OutParm)
	 */
	void UChatLogOtherPlayerMessage_C::ZeroPadding(int32_t InValue, class FText* RetValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.ZeroPadding");
		
		UChatLogOtherPlayerMessage_C_ZeroPadding_Params params {};
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
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBChatUIMessage                            InMessLog                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsEndInit                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               IsCursorStampHit                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UChatLogOtherPlayerMessage_C::Init(const struct FSBChatUIMessage& InMessLog, bool IsEndInit, bool IsCursorStampHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.Init");
		
		UChatLogOtherPlayerMessage_C_Init_Params params {};
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
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__FaceImageButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogOtherPlayerMessage_C::BndEvt__FaceImageButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__FaceImageButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature");
		
		UChatLogOtherPlayerMessage_C_BndEvt__FaceImageButton_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.DonwloadFaceImage_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      URL                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UChatLogOtherPlayerMessage_C::DonwloadFaceImage_Event(const class FString& URL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.DonwloadFaceImage_Event");
		
		UChatLogOtherPlayerMessage_C_DonwloadFaceImage_Event_Params params {};
		params.URL = URL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnTimeEvent
	 * 		Flags  -> ()
	 */
	void UChatLogOtherPlayerMessage_C::OnTimeEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnTimeEvent");
		
		UChatLogOtherPlayerMessage_C_OnTimeEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogOtherPlayerMessage_C::BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");
		
		UChatLogOtherPlayerMessage_C_BndEvt__Button_82_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogOtherPlayerMessage_C::BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");
		
		UChatLogOtherPlayerMessage_C_BndEvt__Button_StampLog_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogOtherPlayerMessage_C::BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature");
		
		UChatLogOtherPlayerMessage_C_BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UChatLogOtherPlayerMessage_C::BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature");
		
		UChatLogOtherPlayerMessage_C_BndEvt__SBButtonMessageBG_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.ClipboardCopy
	 * 		Flags  -> ()
	 */
	void UChatLogOtherPlayerMessage_C::ClipboardCopy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.ClipboardCopy");
		
		UChatLogOtherPlayerMessage_C_ClipboardCopy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.Destruct
	 * 		Flags  -> ()
	 */
	void UChatLogOtherPlayerMessage_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.Destruct");
		
		UChatLogOtherPlayerMessage_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnGetPlayerProfile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FPlayerProfileMenuDetailData                PlayerProfileDetailMenuData                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            RetCode                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogOtherPlayerMessage_C::OnGetPlayerProfile(bool bWasSuccessful, const struct FPlayerProfileMenuDetailData& PlayerProfileDetailMenuData, int32_t RetCode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnGetPlayerProfile");
		
		UChatLogOtherPlayerMessage_C_OnGetPlayerProfile_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.PlayerProfileDetailMenuData = PlayerProfileDetailMenuData;
		params.RetCode = RetCode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnClose_Event
	 * 		Flags  -> ()
	 */
	void UChatLogOtherPlayerMessage_C::OnClose_Event()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnClose_Event");
		
		UChatLogOtherPlayerMessage_C_OnClose_Event_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.SetWidthOverride
	 * 		Flags  -> ()
	 */
	void UChatLogOtherPlayerMessage_C::SetWidthOverride()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.SetWidthOverride");
		
		UChatLogOtherPlayerMessage_C_SetWidthOverride_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.ExecuteUbergraph_ChatLogOtherPlayerMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogOtherPlayerMessage_C::ExecuteUbergraph_ChatLogOtherPlayerMessage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.ExecuteUbergraph_ChatLogOtherPlayerMessage");
		
		UChatLogOtherPlayerMessage_C_ExecuteUbergraph_ChatLogOtherPlayerMessage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnClickedDirectMessage__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TagertPlayerId                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        TagertName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      CharacterId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESBPrivilegeType                                   PrivilegeType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UChatLogOtherPlayerMessage_C::OnClickedDirectMessage__DelegateSignature(const class FString& TagertPlayerId, const class FText& TagertName, const class FString& CharacterId, ESBPrivilegeType PrivilegeType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C.OnClickedDirectMessage__DelegateSignature");
		
		UChatLogOtherPlayerMessage_C_OnClickedDirectMessage__DelegateSignature_Params params {};
		params.TagertPlayerId = TagertPlayerId;
		params.TagertName = TagertName;
		params.CharacterId = CharacterId;
		params.PrivilegeType = PrivilegeType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatLogOtherPlayerMessage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatLogOtherPlayerMessage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ChatLogOtherPlayerMessage.ChatLogOtherPlayerMessage_C");
		return ptr;
	}

}


