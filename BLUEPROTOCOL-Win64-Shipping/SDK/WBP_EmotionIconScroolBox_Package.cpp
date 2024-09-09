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
	 * 		Name   -> Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.SetDragableItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InDragable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_EmotionIconScroolBox_C::SetDragableItem(bool InDragable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.SetDragableItem");
		
		UWBP_EmotionIconScroolBox_C_SetDragableItem_Params params {};
		params.InDragable = InDragable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.SetSelectedIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     InSelectedItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_EmotionIconScroolBox_C::SetSelectedIcon(class UObject* InSelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.SetSelectedIcon");
		
		UWBP_EmotionIconScroolBox_C_SetSelectedIcon_Params params {};
		params.InSelectedItem = InSelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.IsEnableEmoteIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        EmoteId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsEnable                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_EmotionIconScroolBox_C::IsEnableEmoteIcon(const class FName& EmoteId, bool* bIsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.IsEnableEmoteIcon");
		
		UWBP_EmotionIconScroolBox_C_IsEnableEmoteIcon_Params params {};
		params.EmoteId = EmoteId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsEnable != nullptr)
			*bIsEnable = params.bIsEnable;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.UpdateEmoteIconEnable
	 * 		Flags  -> ()
	 */
	void UWBP_EmotionIconScroolBox_C::UpdateEmoteIconEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.UpdateEmoteIconEnable");
		
		UWBP_EmotionIconScroolBox_C_UpdateEmoteIconEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.ClearEmotionSlot
	 * 		Flags  -> ()
	 */
	void UWBP_EmotionIconScroolBox_C::ClearEmotionSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.ClearEmotionSlot");
		
		UWBP_EmotionIconScroolBox_C_ClearEmotionSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.RefreshEmotion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              InEmotionList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_EmotionIconScroolBox_C::RefreshEmotion(TArray<class FString>* InEmotionList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.RefreshEmotion");
		
		UWBP_EmotionIconScroolBox_C_RefreshEmotion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InEmotionList != nullptr)
			*InEmotionList = params.InEmotionList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.CreateEmotionEmptySlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InSlotCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_EmotionIconScroolBox_C::CreateEmotionEmptySlot(int32_t InSlotCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.CreateEmotionEmptySlot");
		
		UWBP_EmotionIconScroolBox_C_CreateEmotionEmptySlot_Params params {};
		params.InSlotCount = InSlotCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.CreateEmotionIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              InEmotionList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWBP_EmotionIconScroolBox_C::CreateEmotionIcon(TArray<class FString>* InEmotionList)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.CreateEmotionIcon");
		
		UWBP_EmotionIconScroolBox_C_CreateEmotionIcon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InEmotionList != nullptr)
			*InEmotionList = params.InEmotionList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.Destruct_Emotion
	 * 		Flags  -> ()
	 */
	void UWBP_EmotionIconScroolBox_C::Destruct_Emotion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.Destruct_Emotion");
		
		UWBP_EmotionIconScroolBox_C_Destruct_Emotion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.Event_OnSelectEmotionItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEmotionMenu_Item_C*                         InSelectedItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_EmotionIconScroolBox_C::Event_OnSelectEmotionItem(class UEmotionMenu_Item_C* InSelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.Event_OnSelectEmotionItem");
		
		UWBP_EmotionIconScroolBox_C_Event_OnSelectEmotionItem_Params params {};
		params.InSelectedItem = InSelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.ExecuteUbergraph_WBP_EmotionIconScroolBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_EmotionIconScroolBox_C::ExecuteUbergraph_WBP_EmotionIconScroolBox(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.ExecuteUbergraph_WBP_EmotionIconScroolBox");
		
		UWBP_EmotionIconScroolBox_C_ExecuteUbergraph_WBP_EmotionIconScroolBox_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.OnSelectEmotionItem__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEmotionMenu_Item_C*                         InSelectedItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_EmotionIconScroolBox_C::OnSelectEmotionItem__DelegateSignature(class UEmotionMenu_Item_C* InSelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C.OnSelectEmotionItem__DelegateSignature");
		
		UWBP_EmotionIconScroolBox_C_OnSelectEmotionItem__DelegateSignature_Params params {};
		params.InSelectedItem = InSelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_EmotionIconScroolBox_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_EmotionIconScroolBox_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_EmotionIconScroolBox.WBP_EmotionIconScroolBox_C");
		return ptr;
	}

}


