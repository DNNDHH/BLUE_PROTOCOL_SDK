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
	 * 		Name   -> Function BPI_CommandMenuChildrenSwitcher.BPI_CommandMenuChildrenSwitcher_C.SwitchSelect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OpenBookMarkType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        ParamName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_CommandMenuChildrenSwitcher_C::SwitchSelect(const class FString& OpenBookMarkType, const class FName& ParamName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_CommandMenuChildrenSwitcher.BPI_CommandMenuChildrenSwitcher_C.SwitchSelect");
		
		UBPI_CommandMenuChildrenSwitcher_C_SwitchSelect_Params params {};
		params.OpenBookMarkType = OpenBookMarkType;
		params.ParamName = ParamName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_CommandMenuChildrenSwitcher.BPI_CommandMenuChildrenSwitcher_C.TermRequesTiming
	 * 		Flags  -> ()
	 */
	void UBPI_CommandMenuChildrenSwitcher_C::TermRequesTiming()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_CommandMenuChildrenSwitcher.BPI_CommandMenuChildrenSwitcher_C.TermRequesTiming");
		
		UBPI_CommandMenuChildrenSwitcher_C_TermRequesTiming_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_CommandMenuChildrenSwitcher.BPI_CommandMenuChildrenSwitcher_C.SwitchOut
	 * 		Flags  -> ()
	 */
	void UBPI_CommandMenuChildrenSwitcher_C::SwitchOut()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_CommandMenuChildrenSwitcher.BPI_CommandMenuChildrenSwitcher_C.SwitchOut");
		
		UBPI_CommandMenuChildrenSwitcher_C_SwitchOut_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BPI_CommandMenuChildrenSwitcher.BPI_CommandMenuChildrenSwitcher_C.SwitchIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      OpenBookMarkType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FName                                        ParamName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_CommandMenuChildrenSwitcher_C::SwitchIn(const class FString& OpenBookMarkType, const class FName& ParamName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_CommandMenuChildrenSwitcher.BPI_CommandMenuChildrenSwitcher_C.SwitchIn");
		
		UBPI_CommandMenuChildrenSwitcher_C_SwitchIn_Params params {};
		params.OpenBookMarkType = OpenBookMarkType;
		params.ParamName = ParamName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_CommandMenuChildrenSwitcher_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_CommandMenuChildrenSwitcher_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_CommandMenuChildrenSwitcher.BPI_CommandMenuChildrenSwitcher_C");
		return ptr;
	}

}


