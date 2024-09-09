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
	 * 		Name   -> Function LibraryMenu_Monster_ElementData.LibraryMenu_Monster_ElementData_C.IconMaskMode
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_ElementData_C::IconMaskMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_ElementData.LibraryMenu_Monster_ElementData_C.IconMaskMode");
		
		ULibraryMenu_Monster_ElementData_C_IconMaskMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_ElementData.LibraryMenu_Monster_ElementData_C.Set Icon Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    VisibleIndexList                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_Monster_ElementData_C::SetIconData(TArray<int32_t>* VisibleIndexList, int32_t Offset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_ElementData.LibraryMenu_Monster_ElementData_C.Set Icon Data");
		
		ULibraryMenu_Monster_ElementData_C_SetIconData_Params params {};
		params.Offset = Offset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VisibleIndexList != nullptr)
			*VisibleIndexList = params.VisibleIndexList;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_ElementData.LibraryMenu_Monster_ElementData_C.ResetIconVisibility
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_ElementData_C::ResetIconVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_ElementData.LibraryMenu_Monster_ElementData_C.ResetIconVisibility");
		
		ULibraryMenu_Monster_ElementData_C_ResetIconVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_Monster_ElementData.LibraryMenu_Monster_ElementData_C.Init
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_Monster_ElementData_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_Monster_ElementData.LibraryMenu_Monster_ElementData_C.Init");
		
		ULibraryMenu_Monster_ElementData_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_Monster_ElementData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_Monster_ElementData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_Monster_ElementData.LibraryMenu_Monster_ElementData_C");
		return ptr;
	}

}


