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
	 * 		Name   -> Function CharaCreateViewerTextBlock.CharaCreateViewerTextBlock_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UCharaCreateViewerTextBlock_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharaCreateViewerTextBlock.CharaCreateViewerTextBlock_C.SetText");
		
		UCharaCreateViewerTextBlock_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CharaCreateViewerTextBlock.CharaCreateViewerTextBlock_C.ExecuteUbergraph_CharaCreateViewerTextBlock
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCharaCreateViewerTextBlock_C::ExecuteUbergraph_CharaCreateViewerTextBlock(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CharaCreateViewerTextBlock.CharaCreateViewerTextBlock_C.ExecuteUbergraph_CharaCreateViewerTextBlock");
		
		UCharaCreateViewerTextBlock_C_ExecuteUbergraph_CharaCreateViewerTextBlock_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharaCreateViewerTextBlock_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharaCreateViewerTextBlock_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CharaCreateViewerTextBlock.CharaCreateViewerTextBlock_C");
		return ptr;
	}

}


