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
	 * 		Name   -> Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.GetStampList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStampCategoryMasterData                  InCategoryMasterData                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSBStampCategoryMasterData                  OutCategoryMasterData                                      (Parm, OutParm)
	 */
	void UEmotionMenu_StampMenu_C::GetStampList(const struct FSBStampCategoryMasterData& InCategoryMasterData, struct FSBStampCategoryMasterData* OutCategoryMasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.GetStampList");
		
		UEmotionMenu_StampMenu_C_GetStampList_Params params {};
		params.InCategoryMasterData = InCategoryMasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutCategoryMasterData != nullptr)
			*OutCategoryMasterData = params.OutCategoryMasterData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.SelectStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InStampId                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UChatStampButtonItem_C*                      InStampItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmotionMenu_StampMenu_C::SelectStamp(int32_t InStampId, class UChatStampButtonItem_C* InStampItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.SelectStamp");
		
		UEmotionMenu_StampMenu_C_SelectStamp_Params params {};
		params.InStampId = InStampId;
		params.InStampItem = InStampItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.Hide
	 * 		Flags  -> ()
	 */
	void UEmotionMenu_StampMenu_C::Hide()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.Hide");
		
		UEmotionMenu_StampMenu_C_Hide_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.Show
	 * 		Flags  -> ()
	 */
	void UEmotionMenu_StampMenu_C::Show()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.Show");
		
		UEmotionMenu_StampMenu_C_Show_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.SetDragable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InDragable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEmotionMenu_StampMenu_C::SetDragable(bool InDragable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.SetDragable");
		
		UEmotionMenu_StampMenu_C_SetDragable_Params params {};
		params.InDragable = InDragable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.UpdateIconSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UChatStampButtonItem_C*                      InSelectIcon                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmotionMenu_StampMenu_C::UpdateIconSelect(class UChatStampButtonItem_C* InSelectIcon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.UpdateIconSelect");
		
		UEmotionMenu_StampMenu_C_UpdateIconSelect_Params params {};
		params.InSelectIcon = InSelectIcon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.SetHistoryMode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSet                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEmotionMenu_StampMenu_C::SetHistoryMode(bool bSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.SetHistoryMode");
		
		UEmotionMenu_StampMenu_C_SetHistoryMode_Params params {};
		params.bSet = bSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.CreateStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStampCategoryMasterData                  StampData                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEmotionMenu_StampMenu_C::CreateStamp(const struct FSBStampCategoryMasterData& StampData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.CreateStamp");
		
		UEmotionMenu_StampMenu_C_CreateStamp_Params params {};
		params.StampData = StampData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.Construct
	 * 		Flags  -> ()
	 */
	void UEmotionMenu_StampMenu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.Construct");
		
		UEmotionMenu_StampMenu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.OnStampClicked_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            StampId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UChatStampButtonItem_C*                      InSelectItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmotionMenu_StampMenu_C::OnStampClicked_Event(int32_t StampId, class UChatStampButtonItem_C* InSelectItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.OnStampClicked_Event");
		
		UEmotionMenu_StampMenu_C_OnStampClicked_Event_Params params {};
		params.StampId = StampId;
		params.InSelectItem = InSelectItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBStampCategoryMasterData                  StampCategoryMasterData                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UEmotionMenu_StampMenu_C::BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature(const struct FSBStampCategoryMasterData& StampCategoryMasterData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature");
		
		UEmotionMenu_StampMenu_C_BndEvt__StampCategoryMenu_K2Node_ComponentBoundEvent_21_OnUpdateStamp__DelegateSignature_Params params {};
		params.StampCategoryMasterData = StampCategoryMasterData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.Destruct
	 * 		Flags  -> ()
	 */
	void UEmotionMenu_StampMenu_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.Destruct");
		
		UEmotionMenu_StampMenu_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.OnChangeCoolTimeEmotion
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsCoolTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UEmotionMenu_StampMenu_C::OnChangeCoolTimeEmotion(bool IsCoolTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.OnChangeCoolTimeEmotion");
		
		UEmotionMenu_StampMenu_C_OnChangeCoolTimeEmotion_Params params {};
		params.IsCoolTime = IsCoolTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.BndEvt__EmotionMenu_StampMenu_ChatSortItem_K2Node_ComponentBoundEvent_0_OnSortChage__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmotionMenu_StampMenu_C::BndEvt__EmotionMenu_StampMenu_ChatSortItem_K2Node_ComponentBoundEvent_0_OnSortChage__DelegateSignature(int32_t SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.BndEvt__EmotionMenu_StampMenu_ChatSortItem_K2Node_ComponentBoundEvent_0_OnSortChage__DelegateSignature");
		
		UEmotionMenu_StampMenu_C_BndEvt__EmotionMenu_StampMenu_ChatSortItem_K2Node_ComponentBoundEvent_0_OnSortChage__DelegateSignature_Params params {};
		params.SortType = SortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.UpdateSortType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SortType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmotionMenu_StampMenu_C::UpdateSortType(int32_t SortType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.UpdateSortType");
		
		UEmotionMenu_StampMenu_C_UpdateSortType_Params params {};
		params.SortType = SortType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.ExecuteUbergraph_EmotionMenu_StampMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEmotionMenu_StampMenu_C::ExecuteUbergraph_EmotionMenu_StampMenu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EmotionMenu_StampMenu.EmotionMenu_StampMenu_C.ExecuteUbergraph_EmotionMenu_StampMenu");
		
		UEmotionMenu_StampMenu_C_ExecuteUbergraph_EmotionMenu_StampMenu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEmotionMenu_StampMenu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEmotionMenu_StampMenu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EmotionMenu_StampMenu.EmotionMenu_StampMenu_C");
		return ptr;
	}

}


