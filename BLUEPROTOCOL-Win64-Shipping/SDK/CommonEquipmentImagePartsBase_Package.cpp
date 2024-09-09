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
	 * 		Name   -> Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetItem2DImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentImagePartsBase_C::SetItem2DImage(int32_t ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetItem2DImage");
		
		UCommonEquipmentImagePartsBase_C_SetItem2DImage_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetModelCaptureImageVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentImagePartsBase_C::SetModelCaptureImageVisibility(bool InIsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetModelCaptureImageVisibility");
		
		UCommonEquipmentImagePartsBase_C_SetModelCaptureImageVisibility_Params params {};
		params.InIsVisible = InIsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetImagine2DImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InImagineId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentImagePartsBase_C::SetImagine2DImage(int32_t InImagineId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetImagine2DImage");
		
		UCommonEquipmentImagePartsBase_C_SetImagine2DImage_Params params {};
		params.InImagineId = InImagineId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetWeapon2DImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InWeaponID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipmentImagePartsBase_C::SetWeapon2DImage(int32_t InWeaponID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SetWeapon2DImage");
		
		UCommonEquipmentImagePartsBase_C_SetWeapon2DImage_Params params {};
		params.InWeaponID = InWeaponID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SwitchModelTypeWeaponOrImagine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIsWeapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentImagePartsBase_C::SwitchModelTypeWeaponOrImagine(bool InIsWeapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SwitchModelTypeWeaponOrImagine");
		
		UCommonEquipmentImagePartsBase_C_SwitchModelTypeWeaponOrImagine_Params params {};
		params.InIsWeapon = InIsWeapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SwitchImageType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               InIs2DImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipmentImagePartsBase_C::SwitchImageType(bool InIs2DImage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C.SwitchImageType");
		
		UCommonEquipmentImagePartsBase_C_SwitchImageType_Params params {};
		params.InIs2DImage = InIs2DImage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonEquipmentImagePartsBase_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonEquipmentImagePartsBase_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonEquipmentImagePartsBase.CommonEquipmentImagePartsBase_C");
		return ptr;
	}

}


