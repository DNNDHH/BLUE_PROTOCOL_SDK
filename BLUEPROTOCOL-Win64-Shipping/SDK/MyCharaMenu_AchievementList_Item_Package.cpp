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
	 * 		Name   -> Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.SetAchievementUnlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsUnlocked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_AchievementList_Item_C::SetAchievementUnlock(bool IsUnlocked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.SetAchievementUnlock");
		
		UMyCharaMenu_AchievementList_Item_C_SetAchievementUnlock_Params params {};
		params.IsUnlocked = IsUnlocked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.SetAsAchievementSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsAchievementSelected                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_AchievementList_Item_C::SetAsAchievementSelected(bool IsAchievementSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.SetAsAchievementSelected");
		
		UMyCharaMenu_AchievementList_Item_C_SetAsAchievementSelected_Params params {};
		params.IsAchievementSelected = IsAchievementSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.SetTooltipEnable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsEnable                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_AchievementList_Item_C::SetTooltipEnable(bool IsEnable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.SetTooltipEnable");
		
		UMyCharaMenu_AchievementList_Item_C_SetTooltipEnable_Params params {};
		params.IsEnable = IsEnable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.GetAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            OutAchievementId                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_AchievementList_Item_C::GetAchievement(int32_t* OutAchievementId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.GetAchievement");
		
		UMyCharaMenu_AchievementList_Item_C_GetAchievement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAchievementId != nullptr)
			*OutAchievementId = params.OutAchievementId;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.SetAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAchievementId                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_AchievementList_Item_C::SetAchievement(int32_t InAchievementId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.SetAchievement");
		
		UMyCharaMenu_AchievementList_Item_C_SetAchievement_Params params {};
		params.InAchievementId = InAchievementId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UMyCharaMenu_AchievementList_Item_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.GetToolTipWidget_1");
		
		UMyCharaMenu_AchievementList_Item_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_AchievementList_Item_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.PreConstruct");
		
		UMyCharaMenu_AchievementList_Item_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.BndEvt__CheckBoxNormal_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_AchievementList_Item_C::BndEvt__CheckBoxNormal_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.BndEvt__CheckBoxNormal_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UMyCharaMenu_AchievementList_Item_C_BndEvt__CheckBoxNormal_K2Node_ComponentBoundEvent_219_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.ExecuteUbergraph_MyCharaMenu_AchievementList_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_AchievementList_Item_C::ExecuteUbergraph_MyCharaMenu_AchievementList_Item(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.ExecuteUbergraph_MyCharaMenu_AchievementList_Item");
		
		UMyCharaMenu_AchievementList_Item_C_ExecuteUbergraph_MyCharaMenu_AchievementList_Item_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.OnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMyCharaMenu_AchievementList_Item_C*         InSelectedItem                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_AchievementList_Item_C::OnSelected__DelegateSignature(class UMyCharaMenu_AchievementList_Item_C* InSelectedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C.OnSelected__DelegateSignature");
		
		UMyCharaMenu_AchievementList_Item_C_OnSelected__DelegateSignature_Params params {};
		params.InSelectedItem = InSelectedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_AchievementList_Item_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_AchievementList_Item_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_AchievementList_Item.MyCharaMenu_AchievementList_Item_C");
		return ptr;
	}

}


