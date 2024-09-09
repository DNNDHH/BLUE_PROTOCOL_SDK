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
	 * 		Name   -> Function CommonEquipmentModelCaptureImageParts.CommonEquipmentModelCaptureImageParts_C.SwitchModelImageForWeaponOrImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsForWeapon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentModelCaptureImageParts_C::SwitchModelImageForWeaponOrImagine(bool InIsForWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentModelCaptureImageParts.CommonEquipmentModelCaptureImageParts_C.SwitchModelImageForWeaponOrImagine");
		
		UCommonEquipmentModelCaptureImageParts_C_SwitchModelImageForWeaponOrImagine_Params params {};
		params.InIsForWeapon = InIsForWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentModelCaptureImageParts.CommonEquipmentModelCaptureImageParts_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentModelCaptureImageParts_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentModelCaptureImageParts.CommonEquipmentModelCaptureImageParts_C.PreConstruct");
		
		UCommonEquipmentModelCaptureImageParts_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentModelCaptureImageParts.CommonEquipmentModelCaptureImageParts_C.ExecuteUbergraph_CommonEquipmentModelCaptureImageParts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentModelCaptureImageParts_C::ExecuteUbergraph_CommonEquipmentModelCaptureImageParts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentModelCaptureImageParts.CommonEquipmentModelCaptureImageParts_C.ExecuteUbergraph_CommonEquipmentModelCaptureImageParts");
		
		UCommonEquipmentModelCaptureImageParts_C_ExecuteUbergraph_CommonEquipmentModelCaptureImageParts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonEquipmentModelCaptureImageParts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonEquipmentModelCaptureImageParts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonEquipmentModelCaptureImageParts.CommonEquipmentModelCaptureImageParts_C");
		return ptr;
	}

}


