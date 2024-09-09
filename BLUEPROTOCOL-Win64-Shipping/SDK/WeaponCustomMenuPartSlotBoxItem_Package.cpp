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
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility2Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsMax                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetAbility2Color(const struct FSlateColor& InColorAndOpacity, bool IsMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility2Color");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetAbility2Color_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		params.IsMax = IsMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetChangeShow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetChangeShow(bool bShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetChangeShow");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetChangeShow_Params params {};
		params.bShow = bShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.DebugPrint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      InStr                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::DebugPrint(const class FString& InStr, float Duration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.DebugPrint");
		
		UWeaponCustomMenuPartSlotBoxItem_C_DebugPrint_Params params {};
		params.InStr = InStr;
		params.Duration = Duration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOverlapUnSelect
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetOverlapUnSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOverlapUnSelect");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetOverlapUnSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetVisibleIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetVisibleIcon(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetVisibleIcon");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetVisibleIcon_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOverlapSelect
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetOverlapSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOverlapSelect");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetOverlapSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOverlapLock
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetOverlapLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOverlapLock");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetOverlapLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOverlapRemove
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetOverlapRemove()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOverlapRemove");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetOverlapRemove_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOverlapAddSlot
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetOverlapAddSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOverlapAddSlot");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetOverlapAddSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOverlapVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetOverlapVisible(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOverlapVisible");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetOverlapVisible_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupOverlapUnSelect
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetupOverlapUnSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupOverlapUnSelect");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetupOverlapUnSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.GetAbilityDescToolTipWidget
	 * 		Flags  -> ()
	 */
	class UWidget* UWeaponCustomMenuPartSlotBoxItem_C::GetAbilityDescToolTipWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.GetAbilityDescToolTipWidget");
		
		UWeaponCustomMenuPartSlotBoxItem_C_GetAbilityDescToolTipWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetSlotBGSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetSlotBGSize(int32_t SlotNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetSlotBGSize");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetSlotBGSize_Params params {};
		params.SlotNum = SlotNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupAbilityChangeWindowValue
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetupAbilityChangeWindowValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupAbilityChangeWindowValue");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetupAbilityChangeWindowValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupAbilityChangeWindowLock
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetupAbilityChangeWindowLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupAbilityChangeWindowLock");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetupAbilityChangeWindowLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupAbilityChangeWindowNone
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetupAbilityChangeWindowNone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupAbilityChangeWindowNone");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetupAbilityChangeWindowNone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbilityChangeWindowVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetAbilityChangeWindowVisible(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbilityChangeWindowVisible");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetAbilityChangeWindowVisible_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.IsLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLock                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::IsLock(bool* IsLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.IsLock");
		
		UWeaponCustomMenuPartSlotBoxItem_C_IsLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsLock != nullptr)
			*IsLock = params.IsLock;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.UpdateLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLock                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::UpdateLock(bool IsLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.UpdateLock");
		
		UWeaponCustomMenuPartSlotBoxItem_C_UpdateLock_Params params {};
		params.IsLock = IsLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.GetTagChangeValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterWeaponPerkData                  Before                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FSBCharacterWeaponPerkData                  After                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            Delta                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::GetTagChangeValue(const struct FSBCharacterWeaponPerkData& Before, const struct FSBCharacterWeaponPerkData& After, int32_t* Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.GetTagChangeValue");
		
		UWeaponCustomMenuPartSlotBoxItem_C_GetTagChangeValue_Params params {};
		params.Before = Before;
		params.After = After;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Delta != nullptr)
			*Delta = params.Delta;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.IsOptionVisible
	 * 		Flags  -> ()
	 */
	bool UWeaponCustomMenuPartSlotBoxItem_C::IsOptionVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.IsOptionVisible");
		
		UWeaponCustomMenuPartSlotBoxItem_C_IsOptionVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOptionVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetOptionVisible(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetOptionVisible");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetOptionVisible_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupLocking
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetupLocking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupLocking");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetupLocking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLock                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetupLock(bool IsLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupLock");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetupLock_Params params {};
		params.IsLock = IsLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupTag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterWeaponPerkData                  Before                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FSBCharacterWeaponPerkData                  After                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetupTag(const struct FSBCharacterWeaponPerkData& Before, const struct FSBCharacterWeaponPerkData& After)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupTag");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetupTag_Params params {};
		params.Before = Before;
		params.After = After;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetRarity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InRarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetRarity(int32_t InRarity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetRarity");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetRarity_Params params {};
		params.InRarity = InRarity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetRarityVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetRarityVisible(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetRarityVisible");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetRarityVisible_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility2Value
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBCharacterWeaponPerkData                  InWeaponPerkData                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetAbility2Value(const class FName& RowName, const struct FSBCharacterWeaponPerkData& InWeaponPerkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility2Value");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetAbility2Value_Params params {};
		params.RowName = RowName;
		params.InWeaponPerkData = InWeaponPerkData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility2Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetAbility2Name(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility2Name");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetAbility2Name_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility2Visible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetAbility2Visible(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility2Visible");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetAbility2Visible_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility1Color
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSlateColor                                 InColorAndOpacity                                          (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               IsMax                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetAbility1Color(const struct FSlateColor& InColorAndOpacity, bool IsMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility1Color");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetAbility1Color_Params params {};
		params.InColorAndOpacity = InColorAndOpacity;
		params.IsMax = IsMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility1Value
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBCharacterWeaponPerkData                  InWeaponPerkData                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetAbility1Value(const class FName& RowName, const struct FSBCharacterWeaponPerkData& InWeaponPerkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility1Value");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetAbility1Value_Params params {};
		params.RowName = RowName;
		params.InWeaponPerkData = InWeaponPerkData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility1Name
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetAbility1Name(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility1Name");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetAbility1Name_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility1Visible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetAbility1Visible(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetAbility1Visible");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetAbility1Visible_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetItemName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetItemName(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetItemName");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetItemName_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetPerkEmpty
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetPerkEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetPerkEmpty");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetPerkEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetPerkForItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InItemID                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetPerkForItem(int32_t InItemID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetPerkForItem");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetPerkForItem_Params params {};
		params.InItemID = InItemID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetPerk
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterWeaponPerkData                  WeaponPerkData                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetPerk(const struct FSBCharacterWeaponPerkData& WeaponPerkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetPerk");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetPerk_Params params {};
		params.WeaponPerkData = WeaponPerkData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetSlotIcon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetSlotIcon(int32_t SlotNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetSlotIcon");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetSlotIcon_Params params {};
		params.SlotNum = SlotNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotNum                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetSlot(int32_t SlotNum)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetSlot");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetSlot_Params params {};
		params.SlotNum = SlotNum;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupOverlapSelect
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetupOverlapSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupOverlapSelect");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetupOverlapSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupOverlapLock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetupOverlapLock(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupOverlapLock");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetupOverlapLock_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupOverlapRemove
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsRemove                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetupOverlapRemove(bool IsRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupOverlapRemove");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetupOverlapRemove_Params params {};
		params.IsRemove = IsRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupOverlapAddSlot
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetupOverlapAddSlot()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupOverlapAddSlot");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetupOverlapAddSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetVisibleButton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetVisibleButton(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetVisibleButton");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetVisibleButton_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.IsVisibleSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NewParam                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::IsVisibleSelect(bool* NewParam)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.IsVisibleSelect");
		
		UWeaponCustomMenuPartSlotBoxItem_C_IsVisibleSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewParam != nullptr)
			*NewParam = params.NewParam;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetVisibleSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetVisibleSelect(bool InVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetVisibleSelect");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetVisibleSelect_Params params {};
		params.InVisible = InVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.IsEmptyPerkData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::IsEmptyPerkData(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.IsEmptyPerkData");
		
		UWeaponCustomMenuPartSlotBoxItem_C_IsEmptyPerkData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.GetPerkData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterWeaponPerkData                  PerkData                                                   (Parm, OutParm, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::GetPerkData(struct FSBCharacterWeaponPerkData* PerkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.GetPerkData");
		
		UWeaponCustomMenuPartSlotBoxItem_C_GetPerkData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PerkData != nullptr)
			*PerkData = params.PerkData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetPerkData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterWeaponPerkData                  InPerkData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetPerkData(const struct FSBCharacterWeaponPerkData& InPerkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetPerkData");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetPerkData_Params params {};
		params.InPerkData = InPerkData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupEmpty
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetupEmpty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupEmpty");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetupEmpty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupLongForItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FOwnItemInfo                                InItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetupLongForItem(const struct FOwnItemInfo& InItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupLongForItem");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetupLongForItem_Params params {};
		params.InItem = InItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupLong
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterWeaponPerkData                  PerkData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetupLong(const struct FSBCharacterWeaponPerkData& PerkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupLong");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetupLong_Params params {};
		params.PerkData = PerkData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupShort
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBCharacterWeaponPerkData                  PerkData                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::SetupShort(const struct FSBCharacterWeaponPerkData& PerkData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.SetupShort");
		
		UWeaponCustomMenuPartSlotBoxItem_C_SetupShort_Params params {};
		params.PerkData = PerkData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.Initialize
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.Initialize");
		
		UWeaponCustomMenuPartSlotBoxItem_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.BndEvt__WeaponSynthePart_PerkSlotItem_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::BndEvt__WeaponSynthePart_PerkSlotItem_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.BndEvt__WeaponSynthePart_PerkSlotItem_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UWeaponCustomMenuPartSlotBoxItem_C_BndEvt__WeaponSynthePart_PerkSlotItem_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.PreConstruct");
		
		UWeaponCustomMenuPartSlotBoxItem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.BndEvt__WeaponSynthePart_PerkSlotItem_Part_ButtonLock_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLock                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::BndEvt__WeaponSynthePart_PerkSlotItem_Part_ButtonLock_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(bool IsLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.BndEvt__WeaponSynthePart_PerkSlotItem_Part_ButtonLock_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UWeaponCustomMenuPartSlotBoxItem_C_BndEvt__WeaponSynthePart_PerkSlotItem_Part_ButtonLock_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.IsLock = IsLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.Construct");
		
		UWeaponCustomMenuPartSlotBoxItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.ExecuteUbergraph_WeaponCustomMenuPartSlotBoxItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::ExecuteUbergraph_WeaponCustomMenuPartSlotBoxItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.ExecuteUbergraph_WeaponCustomMenuPartSlotBoxItem");
		
		UWeaponCustomMenuPartSlotBoxItem_C_ExecuteUbergraph_WeaponCustomMenuPartSlotBoxItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.OnClickedLock__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsLock                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::OnClickedLock__DelegateSignature(bool IsLock)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.OnClickedLock__DelegateSignature");
		
		UWeaponCustomMenuPartSlotBoxItem_C_OnClickedLock__DelegateSignature_Params params {};
		params.IsLock = IsLock;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWeaponCustomMenuPartSlotBoxItem_C::OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C.OnClicked__DelegateSignature");
		
		UWeaponCustomMenuPartSlotBoxItem_C_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeaponCustomMenuPartSlotBoxItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeaponCustomMenuPartSlotBoxItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponCustomMenuPartSlotBoxItem.WeaponCustomMenuPartSlotBoxItem_C");
		return ptr;
	}

}


