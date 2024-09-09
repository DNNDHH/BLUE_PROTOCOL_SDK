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
	 * 		Name   -> Function LicenseTextWidget.LicenseTextWidget_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ULicenseTextWidget_C::SetText(const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LicenseTextWidget.LicenseTextWidget_C.SetText");
		
		ULicenseTextWidget_C_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LicenseTextWidget.LicenseTextWidget_C.SetTextId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTextId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULicenseTextWidget_C::SetTextId(int32_t InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LicenseTextWidget.LicenseTextWidget_C.SetTextId");
		
		ULicenseTextWidget_C_SetTextId_Params params {};
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function LicenseTextWidget.LicenseTextWidget_C.ExecuteUbergraph_LicenseTextWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ULicenseTextWidget_C::ExecuteUbergraph_LicenseTextWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LicenseTextWidget.LicenseTextWidget_C.ExecuteUbergraph_LicenseTextWidget");
		
		ULicenseTextWidget_C_ExecuteUbergraph_LicenseTextWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ULicenseTextWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ULicenseTextWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LicenseTextWidget.LicenseTextWidget_C");
		return ptr;
	}

}


