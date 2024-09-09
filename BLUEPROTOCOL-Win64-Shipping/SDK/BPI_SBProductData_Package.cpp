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
	 * 		Name   -> Function BPI_SBProductData.BPI_SBProductData_C.GetItemBoxDepthIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_SBProductData_C::GetItemBoxDepthIndex(int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SBProductData.BPI_SBProductData_C.GetItemBoxDepthIndex");
		
		UBPI_SBProductData_C_GetItemBoxDepthIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SBProductData.BPI_SBProductData_C.IsItemBox
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReturnValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_SBProductData_C::IsItemBox(bool* bReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SBProductData.BPI_SBProductData_C.IsItemBox");
		
		UBPI_SBProductData_C_IsItemBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bReturnValue != nullptr)
			*bReturnValue = params.bReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SBProductData.BPI_SBProductData_C.GetIconItemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     ItemData                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_SBProductData_C::GetIconItemData(class UBP_SBProductItemData_C** ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SBProductData.BPI_SBProductData_C.GetIconItemData");
		
		UBPI_SBProductData_C_GetIconItemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemData != nullptr)
			*ItemData = params.ItemData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SBProductData.BPI_SBProductData_C.IsCostumeSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReturnValue                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_SBProductData_C::IsCostumeSet(bool* bReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SBProductData.BPI_SBProductData_C.IsCostumeSet");
		
		UBPI_SBProductData_C_IsCostumeSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bReturnValue != nullptr)
			*bReturnValue = params.bReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SBProductData.BPI_SBProductData_C.GetDetailType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_SBProductDetailType                              DetailType                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_SBProductData_C::GetDetailType(E_SBProductDetailType* DetailType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SBProductData.BPI_SBProductData_C.GetDetailType");
		
		UBPI_SBProductData_C_GetDetailType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DetailType != nullptr)
			*DetailType = params.DetailType;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SBProductData.BPI_SBProductData_C.SetSelectedData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_SBProductData_C::SetSelectedData(class UBP_SBProductItemData_C* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SBProductData.BPI_SBProductData_C.SetSelectedData");
		
		UBPI_SBProductData_C_SetSelectedData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SBProductData.BPI_SBProductData_C.GetSelectedData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UBP_SBProductItemData_C*                     Data                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_SBProductData_C::GetSelectedData(class UBP_SBProductItemData_C** Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SBProductData.BPI_SBProductData_C.GetSelectedData");
		
		UBPI_SBProductData_C_GetSelectedData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SBProductData.BPI_SBProductData_C.GetItemDataList
	 * 		Flags  -> ()
	 */
	TArray<class UBP_SBProductItemData_C*> UBPI_SBProductData_C::GetItemDataList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SBProductData.BPI_SBProductData_C.GetItemDataList");
		
		UBPI_SBProductData_C_GetItemDataList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SBProductData.BPI_SBProductData_C.GetScrollOffset
	 * 		Flags  -> ()
	 */
	float UBPI_SBProductData_C::GetScrollOffset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SBProductData.BPI_SBProductData_C.GetScrollOffset");
		
		UBPI_SBProductData_C_GetScrollOffset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SBProductData.BPI_SBProductData_C.SetScrollOffset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_SBProductData_C::SetScrollOffset(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SBProductData.BPI_SBProductData_C.SetScrollOffset");
		
		UBPI_SBProductData_C_SetScrollOffset_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_SBProductData.BPI_SBProductData_C.GetParentData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsValid                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_SBProductData_C::GetParentData(bool* bIsValid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SBProductData.BPI_SBProductData_C.GetParentData");
		
		UBPI_SBProductData_C_GetParentData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bIsValid != nullptr)
			*bIsValid = params.bIsValid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_SBProductData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_SBProductData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_SBProductData.BPI_SBProductData_C");
		return ptr;
	}

}


