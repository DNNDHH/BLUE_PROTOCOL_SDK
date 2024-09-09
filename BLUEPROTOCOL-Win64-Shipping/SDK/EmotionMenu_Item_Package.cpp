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
	 * 		Name   -> Function EmotionMenu_Item.EmotionMenu_Item_C.GetShortcutItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FShortcutItemInfo                           OutShortcutItemInfo                                        (Parm, OutParm)
	 */
	void UEmotionMenu_Item_C::GetShortcutItemInfo(struct FShortcutItemInfo* OutShortcutItemInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_Item.EmotionMenu_Item_C.GetShortcutItemInfo");
		
		UEmotionMenu_Item_C_GetShortcutItemInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutShortcutItemInfo != nullptr)
			*OutShortcutItemInfo = params.OutShortcutItemInfo;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_Item.EmotionMenu_Item_C.SetDragable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InDragable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEmotionMenu_Item_C::SetDragable(bool InDragable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_Item.EmotionMenu_Item_C.SetDragable");
		
		UEmotionMenu_Item_C_SetDragable_Params params {};
		params.InDragable = InDragable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_Item.EmotionMenu_Item_C.OnDragDetected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmotionMenu_Item_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_Item.EmotionMenu_Item_C.OnDragDetected");
		
		UEmotionMenu_Item_C_OnDragDetected_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Operation != nullptr)
			*Operation = params.Operation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_Item.EmotionMenu_Item_C.OnPreviewMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UEmotionMenu_Item_C::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_Item.EmotionMenu_Item_C.OnPreviewMouseButtonDown");
		
		UEmotionMenu_Item_C_OnPreviewMouseButtonDown_Params params {};
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
	 * 		Name   -> Function EmotionMenu_Item.EmotionMenu_Item_C.SetEmptyBgColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ColorType                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmotionMenu_Item_C::SetEmptyBgColor(int32_t ColorType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_Item.EmotionMenu_Item_C.SetEmptyBgColor");
		
		UEmotionMenu_Item_C_SetEmptyBgColor_Params params {};
		params.ColorType = ColorType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_Item.EmotionMenu_Item_C.SetTooptipEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnable                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEmotionMenu_Item_C::SetTooptipEnable(bool bEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_Item.EmotionMenu_Item_C.SetTooptipEnable");
		
		UEmotionMenu_Item_C_SetTooptipEnable_Params params {};
		params.bEnable = bEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_Item.EmotionMenu_Item_C.IsSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEmotionMenu_Item_C::IsSelected(bool* bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_Item.EmotionMenu_Item_C.IsSelected");
		
		UEmotionMenu_Item_C_IsSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSelected != nullptr)
			*bSelected = params.bSelected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_Item.EmotionMenu_Item_C.SetIconSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEmotionMenu_Item_C::SetIconSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_Item.EmotionMenu_Item_C.SetIconSelected");
		
		UEmotionMenu_Item_C_SetIconSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_Item.EmotionMenu_Item_C.GetEmotion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OutEmotion                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEmotionMenu_Item_C::GetEmotion(class FString* OutEmotion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_Item.EmotionMenu_Item_C.GetEmotion");
		
		UEmotionMenu_Item_C_GetEmotion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutEmotion != nullptr)
			*OutEmotion = params.OutEmotion;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_Item.EmotionMenu_Item_C.SetEmpty
	 * 		Flags  -> ()
	 */
	void UEmotionMenu_Item_C::SetEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_Item.EmotionMenu_Item_C.SetEmpty");
		
		UEmotionMenu_Item_C_SetEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_Item.EmotionMenu_Item_C.SetEmotion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InEmotion                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEmotionMenu_Item_C::SetEmotion(const class FString& InEmotion)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_Item.EmotionMenu_Item_C.SetEmotion");
		
		UEmotionMenu_Item_C_SetEmotion_Params params {};
		params.InEmotion = InEmotion;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_Item.EmotionMenu_Item_C.OnChangeCoolTimeEmotion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCoolTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEmotionMenu_Item_C::OnChangeCoolTimeEmotion(bool IsCoolTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_Item.EmotionMenu_Item_C.OnChangeCoolTimeEmotion");
		
		UEmotionMenu_Item_C_OnChangeCoolTimeEmotion_Params params {};
		params.IsCoolTime = IsCoolTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_Item.EmotionMenu_Item_C.OnValidEmoteDelegate_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bValid                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		int32_t                                            EmoteId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmotionMenu_Item_C::OnValidEmoteDelegate_Event_1(bool bValid, int32_t EmoteId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_Item.EmotionMenu_Item_C.OnValidEmoteDelegate_Event_1");
		
		UEmotionMenu_Item_C_OnValidEmoteDelegate_Event_1_Params params {};
		params.bValid = bValid;
		params.EmoteId = EmoteId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_Item.EmotionMenu_Item_C.BndEvt__Button_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UEmotionMenu_Item_C::BndEvt__Button_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_Item.EmotionMenu_Item_C.BndEvt__Button_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");
		
		UEmotionMenu_Item_C_BndEvt__Button_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_Item.EmotionMenu_Item_C.Destruct
	 * 		Flags  -> ()
	 */
	void UEmotionMenu_Item_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_Item.EmotionMenu_Item_C.Destruct");
		
		UEmotionMenu_Item_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_Item.EmotionMenu_Item_C.Construct
	 * 		Flags  -> ()
	 */
	void UEmotionMenu_Item_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_Item.EmotionMenu_Item_C.Construct");
		
		UEmotionMenu_Item_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_Item.EmotionMenu_Item_C.ExecuteUbergraph_EmotionMenu_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmotionMenu_Item_C::ExecuteUbergraph_EmotionMenu_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_Item.EmotionMenu_Item_C.ExecuteUbergraph_EmotionMenu_Item");
		
		UEmotionMenu_Item_C_ExecuteUbergraph_EmotionMenu_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_Item.EmotionMenu_Item_C.OnSelectRight__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEmotionMenu_Item_C*                         InSelectedItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmotionMenu_Item_C::OnSelectRight__DelegateSignature(class UEmotionMenu_Item_C* InSelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_Item.EmotionMenu_Item_C.OnSelectRight__DelegateSignature");
		
		UEmotionMenu_Item_C_OnSelectRight__DelegateSignature_Params params {};
		params.InSelectedItem = InSelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_Item.EmotionMenu_Item_C.OnSelect__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEmotionMenu_Item_C*                         InSelectedItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmotionMenu_Item_C::OnSelect__DelegateSignature(class UEmotionMenu_Item_C* InSelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_Item.EmotionMenu_Item_C.OnSelect__DelegateSignature");
		
		UEmotionMenu_Item_C_OnSelect__DelegateSignature_Params params {};
		params.InSelectedItem = InSelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmotionMenu_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmotionMenu_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EmotionMenu_Item.EmotionMenu_Item_C");
		return ptr;
	}

}


