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
	 * 		Name   -> Function SlotPartAbilityChange.SlotPartAbilityChange_C.ConvertValueToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            UIAttribute                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      OutStr                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void USlotPartAbilityChange_C::ConvertValueToString(int32_t Value, int32_t UIAttribute, class FString* OutStr)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartAbilityChange.SlotPartAbilityChange_C.ConvertValueToString");
		
		USlotPartAbilityChange_C_ConvertValueToString_Params params {};
		params.Value = Value;
		params.UIAttribute = UIAttribute;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutStr != nullptr)
			*OutStr = params.OutStr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartAbilityChange.SlotPartAbilityChange_C.StopAnimArrow
	 * 		Flags  -> ()
	 */
	void USlotPartAbilityChange_C::StopAnimArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartAbilityChange.SlotPartAbilityChange_C.StopAnimArrow");
		
		USlotPartAbilityChange_C_StopAnimArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartAbilityChange.SlotPartAbilityChange_C.PlayAnimArrow
	 * 		Flags  -> ()
	 */
	void USlotPartAbilityChange_C::PlayAnimArrow()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartAbilityChange.SlotPartAbilityChange_C.PlayAnimArrow");
		
		USlotPartAbilityChange_C_PlayAnimArrow_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetValue2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ValueMin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ValueMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USlotPartAbilityChange_C::SetValue2(int32_t ValueMin, int32_t ValueMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetValue2");
		
		USlotPartAbilityChange_C_SetValue2_Params params {};
		params.ValueMin = ValueMin;
		params.ValueMax = ValueMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetValue1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ValueMin                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ValueMax                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USlotPartAbilityChange_C::SetValue1(int32_t ValueMin, int32_t ValueMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetValue1");
		
		USlotPartAbilityChange_C_SetValue1_Params params {};
		params.ValueMin = ValueMin;
		params.ValueMax = ValueMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetTitleRarity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            RarityMin                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            RarityMax                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USlotPartAbilityChange_C::SetTitleRarity(int32_t RarityMin, int32_t RarityMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetTitleRarity");
		
		USlotPartAbilityChange_C_SetTitleRarity_Params params {};
		params.RarityMin = RarityMin;
		params.RarityMax = RarityMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetTitleText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsProtect                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USlotPartAbilityChange_C::SetTitleText(bool IsProtect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetTitleText");
		
		USlotPartAbilityChange_C_SetTitleText_Params params {};
		params.IsProtect = IsProtect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetVisibleValue2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USlotPartAbilityChange_C::SetVisibleValue2(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetVisibleValue2");
		
		USlotPartAbilityChange_C_SetVisibleValue2_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetVisibleValue1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USlotPartAbilityChange_C::SetVisibleValue1(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetVisibleValue1");
		
		USlotPartAbilityChange_C_SetVisibleValue1_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetVisibleValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USlotPartAbilityChange_C::SetVisibleValue(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetVisibleValue");
		
		USlotPartAbilityChange_C_SetVisibleValue_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetVisibleTitle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void USlotPartAbilityChange_C::SetVisibleTitle(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetVisibleTitle");
		
		USlotPartAbilityChange_C_SetVisibleTitle_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetupValue
	 * 		Flags  -> ()
	 */
	void USlotPartAbilityChange_C::SetupValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetupValue");
		
		USlotPartAbilityChange_C_SetupValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetupLock
	 * 		Flags  -> ()
	 */
	void USlotPartAbilityChange_C::SetupLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetupLock");
		
		USlotPartAbilityChange_C_SetupLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetupNone
	 * 		Flags  -> ()
	 */
	void USlotPartAbilityChange_C::SetupNone()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartAbilityChange.SlotPartAbilityChange_C.SetupNone");
		
		USlotPartAbilityChange_C_SetupNone_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartAbilityChange.SlotPartAbilityChange_C.Setup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InAbilityEffectId                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AbilityDBRowName1                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        AbilityDBRowName2                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USlotPartAbilityChange_C::Setup(int32_t InAbilityEffectId, const class FName& AbilityDBRowName1, const class FName& AbilityDBRowName2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartAbilityChange.SlotPartAbilityChange_C.Setup");
		
		USlotPartAbilityChange_C_Setup_Params params {};
		params.InAbilityEffectId = InAbilityEffectId;
		params.AbilityDBRowName1 = AbilityDBRowName1;
		params.AbilityDBRowName2 = AbilityDBRowName2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartAbilityChange.SlotPartAbilityChange_C.Initialize
	 * 		Flags  -> ()
	 */
	void USlotPartAbilityChange_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartAbilityChange.SlotPartAbilityChange_C.Initialize");
		
		USlotPartAbilityChange_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartAbilityChange.SlotPartAbilityChange_C.Construct
	 * 		Flags  -> ()
	 */
	void USlotPartAbilityChange_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartAbilityChange.SlotPartAbilityChange_C.Construct");
		
		USlotPartAbilityChange_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SlotPartAbilityChange.SlotPartAbilityChange_C.ExecuteUbergraph_SlotPartAbilityChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void USlotPartAbilityChange_C::ExecuteUbergraph_SlotPartAbilityChange(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SlotPartAbilityChange.SlotPartAbilityChange_C.ExecuteUbergraph_SlotPartAbilityChange");
		
		USlotPartAbilityChange_C_ExecuteUbergraph_SlotPartAbilityChange_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USlotPartAbilityChange_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USlotPartAbilityChange_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SlotPartAbilityChange.SlotPartAbilityChange_C");
		return ptr;
	}

}


