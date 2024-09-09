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
	 * 		Name   -> Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetInformationVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomMenuPartWindowTop_C::SetInformationVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetInformationVisible");
		
		UCustomMenuPartWindowTop_C_SetInformationVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetInformationTextTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBTextTableAsset*                           InTextTable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomMenuPartWindowTop_C::SetInformationTextTable(class USBTextTableAsset* InTextTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetInformationTextTable");
		
		UCustomMenuPartWindowTop_C_SetInformationTextTable_Params params {};
		params.InTextTable = InTextTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetInformationTextID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTextId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomMenuPartWindowTop_C::SetInformationTextID(int32_t InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetInformationTextID");
		
		UCustomMenuPartWindowTop_C_SetInformationTextID_Params params {};
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetTextVisible
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsVisible                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomMenuPartWindowTop_C::SetTextVisible(bool IsVisible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetTextVisible");
		
		UCustomMenuPartWindowTop_C_SetTextVisible_Params params {};
		params.IsVisible = IsVisible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetTextTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USBTextTableAsset*                           InTextTable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomMenuPartWindowTop_C::SetTextTable(class USBTextTableAsset* InTextTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetTextTable");
		
		UCustomMenuPartWindowTop_C_SetTextTable_Params params {};
		params.InTextTable = InTextTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetTextId
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            InTextId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomMenuPartWindowTop_C::SetTextId(int32_t InTextId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetTextId");
		
		UCustomMenuPartWindowTop_C_SetTextId_Params params {};
		params.InTextId = InTextId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomMenuPartWindowTop_C::SetSize(const struct FVector2D& InSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.SetSize");
		
		UCustomMenuPartWindowTop_C_SetSize_Params params {};
		params.InSize = InSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UCustomMenuPartWindowTop_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.PreConstruct");
		
		UCustomMenuPartWindowTop_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.ExecuteUbergraph_CustomMenuPartWindowTop
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomMenuPartWindowTop_C::ExecuteUbergraph_CustomMenuPartWindowTop(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomMenuPartWindowTop.CustomMenuPartWindowTop_C.ExecuteUbergraph_CustomMenuPartWindowTop");
		
		UCustomMenuPartWindowTop_C_ExecuteUbergraph_CustomMenuPartWindowTop_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomMenuPartWindowTop_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomMenuPartWindowTop_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CustomMenuPartWindowTop.CustomMenuPartWindowTop_C");
		return ptr;
	}

}


