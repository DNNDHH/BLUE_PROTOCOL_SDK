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
	 * 		Name   -> PredefinedFunction UCharaPartsMaterialSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharaPartsMaterialSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharaParts.CharaPartsMaterialSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharaPartsMaterialsList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharaPartsMaterialsList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharaParts.CharaPartsMaterialsList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharaPartsColorListBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharaPartsColorListBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharaParts.CharaPartsColorListBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharaPartsColorList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharaPartsColorList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharaParts.CharaPartsColorList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharaPartsColorWeaponList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharaPartsColorWeaponList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharaParts.CharaPartsColorWeaponList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharaPartsOffsetList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharaPartsOffsetList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharaParts.CharaPartsOffsetList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharaParts.CharaPartsData.GetPartsMaterialColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ColorParameterIndex                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            HueIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            MaterialColorListIndex                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FLinearColor UCharaPartsData::GetPartsMaterialColor(int32_t ColorParameterIndex, int32_t HueIndex, int32_t MaterialColorListIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharaParts.CharaPartsData.GetPartsMaterialColor");
		
		UCharaPartsData_GetPartsMaterialColor_Params params {};
		params.ColorParameterIndex = ColorParameterIndex;
		params.HueIndex = HueIndex;
		params.MaterialColorListIndex = MaterialColorListIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharaParts.CharaPartsData.GetDefaultColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCharaPartsColorData UCharaPartsData::GetDefaultColor(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharaParts.CharaPartsData.GetDefaultColor");
		
		UCharaPartsData_GetDefaultColor_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharaParts.CharaPartsData.GetCheckedSubLocationArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<ECharaPartsLocation>                        CharaPartsLocationArray                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UCharaPartsData::GetCheckedSubLocationArray(TArray<ECharaPartsLocation>* CharaPartsLocationArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharaParts.CharaPartsData.GetCheckedSubLocationArray");
		
		UCharaPartsData_GetCheckedSubLocationArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CharaPartsLocationArray != nullptr)
			*CharaPartsLocationArray = params.CharaPartsLocationArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharaPartsData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharaPartsData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class CharaParts.CharaPartsData");
		return ptr;
	}

}


