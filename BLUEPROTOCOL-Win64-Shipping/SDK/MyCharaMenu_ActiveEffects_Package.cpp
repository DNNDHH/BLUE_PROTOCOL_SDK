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
	 * 		Name   -> Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.GetFreeBuffText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESBFreeBuffPointType                               Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Text                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_ActiveEffects_C::GetFreeBuffText(ESBFreeBuffPointType Type, class FString* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.GetFreeBuffText");
		
		UMyCharaMenu_ActiveEffects_C_GetFreeBuffText_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.AddListsByDateTime
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVerticalBox*                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FDateTime                                   Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bHideYear                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ValueVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_ActiveEffects_C::AddListsByDateTime(class UVerticalBox* Target, const class FString& Name, const struct FDateTime& Value, bool bHideYear, bool ValueVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.AddListsByDateTime");
		
		UMyCharaMenu_ActiveEffects_C_AddListsByDateTime_Params params {};
		params.Target = Target;
		params.Name = Name;
		params.Value = Value;
		params.bHideYear = bHideYear;
		params.ValueVisible = ValueVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.AddListsByFloatValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVerticalBox*                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ValueVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_ActiveEffects_C::AddListsByFloatValue(class UVerticalBox* Target, const class FString& Name, float Value, bool ValueVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.AddListsByFloatValue");
		
		UMyCharaMenu_ActiveEffects_C_AddListsByFloatValue_Params params {};
		params.Target = Target;
		params.Name = Name;
		params.Value = Value;
		params.ValueVisible = ValueVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Add Lists
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVerticalBox*                                Target                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsShowTooltip                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ToolTipText                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		bool                                               ValueVisible                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_ActiveEffects_C::AddLists(class UVerticalBox* Target, bool IsShowTooltip, const class FString& Name, int32_t Value, const class FString& ToolTipText, bool ValueVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Add Lists");
		
		UMyCharaMenu_ActiveEffects_C_AddLists_Params params {};
		params.Target = Target;
		params.IsShowTooltip = IsShowTooltip;
		params.Name = Name;
		params.Value = Value;
		params.ToolTipText = ToolTipText;
		params.ValueVisible = ValueVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Unique Ids
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ActiveEffects_C::CollectUniqueIds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Unique Ids");
		
		UMyCharaMenu_ActiveEffects_C_CollectUniqueIds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Passive Effects
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ActiveEffects_C::CollectPassiveEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Passive Effects");
		
		UMyCharaMenu_ActiveEffects_C_CollectPassiveEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Weapon Effects
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ActiveEffects_C::CollectWeaponEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Weapon Effects");
		
		UMyCharaMenu_ActiveEffects_C_CollectWeaponEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Imagine Perks
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ActiveEffects_C::CollectImaginePerks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Imagine Perks");
		
		UMyCharaMenu_ActiveEffects_C_CollectImaginePerks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Ability
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ActiveEffects_C::CollectAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Ability");
		
		UMyCharaMenu_ActiveEffects_C_CollectAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Base Effects
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ActiveEffects_C::CollectBaseEffects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Base Effects");
		
		UMyCharaMenu_ActiveEffects_C_CollectBaseEffects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Construct
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ActiveEffects_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Construct");
		
		UMyCharaMenu_ActiveEffects_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Init Head
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ActiveEffects_C::InitHead()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Init Head");
		
		UMyCharaMenu_ActiveEffects_C_InitHead_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Generate Lists
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ActiveEffects_C::GenerateLists()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Generate Lists");
		
		UMyCharaMenu_ActiveEffects_C_GenerateLists_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Liquid Memory
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ActiveEffects_C::CollectLiquidMemory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Liquid Memory");
		
		UMyCharaMenu_ActiveEffects_C_CollectLiquidMemory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Other
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ActiveEffects_C::CollectOther()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect Other");
		
		UMyCharaMenu_ActiveEffects_C_CollectOther_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect PioneerAbility
	 * 		Flags  -> ()
	 */
	void UMyCharaMenu_ActiveEffects_C::CollectPioneerAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.Collect PioneerAbility");
		
		UMyCharaMenu_ActiveEffects_C_CollectPioneerAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.ExecuteUbergraph_MyCharaMenu_ActiveEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_ActiveEffects_C::ExecuteUbergraph_MyCharaMenu_ActiveEffects(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C.ExecuteUbergraph_MyCharaMenu_ActiveEffects");
		
		UMyCharaMenu_ActiveEffects_C_ExecuteUbergraph_MyCharaMenu_ActiveEffects_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_ActiveEffects_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_ActiveEffects_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_ActiveEffects.MyCharaMenu_ActiveEffects_C");
		return ptr;
	}

}


