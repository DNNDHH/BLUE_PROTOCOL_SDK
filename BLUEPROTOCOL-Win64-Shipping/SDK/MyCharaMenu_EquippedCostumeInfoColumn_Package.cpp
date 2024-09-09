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
	 * 		Name   -> Function MyCharaMenu_EquippedCostumeInfoColumn.MyCharaMenu_EquippedCostumeInfoColumn_C.UpdateEquippedCostumeInfos
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharaEquipInfo                             InCharaEquipInfo                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESBCharacterGender                                 InCharacterGender                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_EquippedCostumeInfoColumn_C::UpdateEquippedCostumeInfos(const struct FCharaEquipInfo& InCharaEquipInfo, ESBCharacterGender InCharacterGender)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EquippedCostumeInfoColumn.MyCharaMenu_EquippedCostumeInfoColumn_C.UpdateEquippedCostumeInfos");
		
		UMyCharaMenu_EquippedCostumeInfoColumn_C_UpdateEquippedCostumeInfos_Params params {};
		params.InCharaEquipInfo = InCharaEquipInfo;
		params.InCharacterGender = InCharacterGender;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EquippedCostumeInfoColumn.MyCharaMenu_EquippedCostumeInfoColumn_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMyCharaMenu_EquippedCostumeInfoColumn_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EquippedCostumeInfoColumn.MyCharaMenu_EquippedCostumeInfoColumn_C.PreConstruct");
		
		UMyCharaMenu_EquippedCostumeInfoColumn_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MyCharaMenu_EquippedCostumeInfoColumn.MyCharaMenu_EquippedCostumeInfoColumn_C.ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMyCharaMenu_EquippedCostumeInfoColumn_C::ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MyCharaMenu_EquippedCostumeInfoColumn.MyCharaMenu_EquippedCostumeInfoColumn_C.ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn");
		
		UMyCharaMenu_EquippedCostumeInfoColumn_C_ExecuteUbergraph_MyCharaMenu_EquippedCostumeInfoColumn_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMyCharaMenu_EquippedCostumeInfoColumn_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMyCharaMenu_EquippedCostumeInfoColumn_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MyCharaMenu_EquippedCostumeInfoColumn.MyCharaMenu_EquippedCostumeInfoColumn_C");
		return ptr;
	}

}


