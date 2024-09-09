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
	 * 		Name   -> Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.IsStamp
	 * 		Flags  -> ()
	 */
	bool UBP_PhotoModeStampControlData_C::IsStamp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.IsStamp");
		
		UBP_PhotoModeStampControlData_C_IsStamp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.IsLastData
	 * 		Flags  -> ()
	 */
	bool UBP_PhotoModeStampControlData_C::IsLastData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.IsLastData");
		
		UBP_PhotoModeStampControlData_C_IsLastData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.IsFirstData
	 * 		Flags  -> ()
	 */
	bool UBP_PhotoModeStampControlData_C::IsFirstData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.IsFirstData");
		
		UBP_PhotoModeStampControlData_C_IsFirstData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.GetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UBP_PhotoModeStampControlData_C::GetText(class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.GetText");
		
		UBP_PhotoModeStampControlData_C_GetText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetStamp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_PhotoModeStamp_C*                       Stamp                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PhotoModeStampControlData_C::SetStamp(class UWBP_PhotoModeStamp_C* Stamp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetStamp");
		
		UBP_PhotoModeStampControlData_C_SetStamp_Params params {};
		params.Stamp = Stamp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.DELETE
	 * 		Flags  -> ()
	 */
	void UBP_PhotoModeStampControlData_C::DELETE()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.DELETE");
		
		UBP_PhotoModeStampControlData_C_DELETE_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bIsLastData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PhotoModeStampControlData_C::SetIndex(int32_t Index, bool bIsLastData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetIndex");
		
		UBP_PhotoModeStampControlData_C_SetIndex_Params params {};
		params.Index = Index;
		params.bIsLastData = bIsLastData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetVignette
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWidget*                                     Vignette                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PhotoModeStampControlData_C::SetVignette(class UWidget* Vignette)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetVignette");
		
		UBP_PhotoModeStampControlData_C_SetVignette_Params params {};
		params.Vignette = Vignette;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PhotoModeStampControlData_C::SetSize(float Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetSize");
		
		UBP_PhotoModeStampControlData_C_SetSize_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetAngle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PhotoModeStampControlData_C::SetAngle(float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetAngle");
		
		UBP_PhotoModeStampControlData_C_SetAngle_Params params {};
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetAlpha
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Alpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PhotoModeStampControlData_C::SetAlpha(float Alpha)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetAlpha");
		
		UBP_PhotoModeStampControlData_C_SetAlpha_Params params {};
		params.Alpha = Alpha;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetReverse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bReverse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PhotoModeStampControlData_C::SetReverse(bool bReverse)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetReverse");
		
		UBP_PhotoModeStampControlData_C_SetReverse_Params params {};
		params.bReverse = bReverse;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetSelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_PhotoModeStampControlData_C::SetSelected(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetSelected");
		
		UBP_PhotoModeStampControlData_C_SetSelected_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetListItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_PhotoModeStampControlListItem_C*        ListItem                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PhotoModeStampControlData_C::SetListItem(class UWBP_PhotoModeStampControlListItem_C* ListItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.SetListItem");
		
		UBP_PhotoModeStampControlData_C_SetListItem_Params params {};
		params.ListItem = ListItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.ExecuteUbergraph_BP_PhotoModeStampControlData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_PhotoModeStampControlData_C::ExecuteUbergraph_BP_PhotoModeStampControlData(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C.ExecuteUbergraph_BP_PhotoModeStampControlData");
		
		UBP_PhotoModeStampControlData_C_ExecuteUbergraph_BP_PhotoModeStampControlData_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_PhotoModeStampControlData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_PhotoModeStampControlData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PhotoModeStampControlData.BP_PhotoModeStampControlData_C");
		return ptr;
	}

}


