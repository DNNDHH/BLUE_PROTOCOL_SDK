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
	 * 		Name   -> Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.GetWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ULibraryMenu_LoginBonusListLineItem_C*       Widget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonusListLine_C::GetWidget(int32_t Index, class ULibraryMenu_LoginBonusListLineItem_C** Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.GetWidget");
		
		ULibraryMenu_LoginBonusListLine_C_GetWidget_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widget != nullptr)
			*Widget = params.Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.Set Data
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSBLoginBonusWindowDayData                  Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		ESlateVisibility                                   Visibility                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Stump                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Click                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ULibraryMenu_LoginBonusListLine_C::SetData(int32_t Index, const struct FSBLoginBonusWindowDayData& Data, ESlateVisibility Visibility, bool Stump, bool Click)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.Set Data");
		
		ULibraryMenu_LoginBonusListLine_C_SetData_Params params {};
		params.Index = Index;
		params.Data = Data;
		params.Visibility = Visibility;
		params.Stump = Stump;
		params.Click = Click;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.Initialize
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonusListLine_C::Initialize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.Initialize");
		
		ULibraryMenu_LoginBonusListLine_C_Initialize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.Finish
	 * 		Flags  -> ()
	 */
	void ULibraryMenu_LoginBonusListLine_C::Finish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.Finish");
		
		ULibraryMenu_LoginBonusListLine_C_Finish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.OnIconClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonusListLine_C::OnIconClick(int32_t ID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.OnIconClick");
		
		ULibraryMenu_LoginBonusListLine_C_OnIconClick_Params params {};
		params.ID = ID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.ExecuteUbergraph_LibraryMenu_LoginBonusListLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonusListLine_C::ExecuteUbergraph_LibraryMenu_LoginBonusListLine(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.ExecuteUbergraph_LibraryMenu_LoginBonusListLine");
		
		ULibraryMenu_LoginBonusListLine_C_ExecuteUbergraph_LibraryMenu_LoginBonusListLine_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.IconClick__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULibraryMenu_LoginBonusListLine_C::IconClick__DelegateSignature(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C.IconClick__DelegateSignature");
		
		ULibraryMenu_LoginBonusListLine_C_IconClick__DelegateSignature_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULibraryMenu_LoginBonusListLine_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULibraryMenu_LoginBonusListLine_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LibraryMenu_LoginBonusListLine.LibraryMenu_LoginBonusListLine_C");
		return ptr;
	}

}


