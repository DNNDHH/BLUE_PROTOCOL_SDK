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
	 * 		Name   -> Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.SetImageSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bInSetDefaultSize                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipment2DImageParts_C::SetImageSize(const struct FVector2D& InSize, bool bInSetDefaultSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.SetImageSize");
		
		UCommonEquipment2DImageParts_C_SetImageSize_Params params {};
		params.InSize = InSize;
		params.bInSetDefaultSize = bInSetDefaultSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.SetItem2DImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemId                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipment2DImageParts_C::SetItem2DImage(int32_t ItemId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.SetItem2DImage");
		
		UCommonEquipment2DImageParts_C_SetItem2DImage_Params params {};
		params.ItemId = ItemId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.SetImagine2DImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InImagineId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipment2DImageParts_C::SetImagine2DImage(int32_t InImagineId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.SetImagine2DImage");
		
		UCommonEquipment2DImageParts_C_SetImagine2DImage_Params params {};
		params.InImagineId = InImagineId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.SetWeapon2DImage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InWeaponID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipment2DImageParts_C::SetWeapon2DImage(int32_t InWeaponID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.SetWeapon2DImage");
		
		UCommonEquipment2DImageParts_C_SetWeapon2DImage_Params params {};
		params.InWeaponID = InWeaponID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipment2DImageParts_C::OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1");
		
		UCommonEquipment2DImageParts_C_OnLoaded_8704AFA9430524AE0ED6089DB7A3AFA1_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCommonEquipment2DImageParts_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.PreConstruct");
		
		UCommonEquipment2DImageParts_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.RequestEquipment2DImageLoad
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InEquipmentId                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemType                                          InEquipmentItemType                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ESBImagineCategoryType                             InImagineType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipment2DImageParts_C::RequestEquipment2DImageLoad(int32_t InEquipmentId, EItemType InEquipmentItemType, ESBImagineCategoryType InImagineType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.RequestEquipment2DImageLoad");
		
		UCommonEquipment2DImageParts_C_RequestEquipment2DImageLoad_Params params {};
		params.InEquipmentId = InEquipmentId;
		params.InEquipmentItemType = InEquipmentItemType;
		params.InImagineType = InImagineType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.ExecuteUbergraph_CommonEquipment2DImageParts
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCommonEquipment2DImageParts_C::ExecuteUbergraph_CommonEquipment2DImageParts(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommonEquipment2DImageParts.CommonEquipment2DImageParts_C.ExecuteUbergraph_CommonEquipment2DImageParts");
		
		UCommonEquipment2DImageParts_C_ExecuteUbergraph_CommonEquipment2DImageParts_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCommonEquipment2DImageParts_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCommonEquipment2DImageParts_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CommonEquipment2DImageParts.CommonEquipment2DImageParts_C");
		return ptr;
	}

}


