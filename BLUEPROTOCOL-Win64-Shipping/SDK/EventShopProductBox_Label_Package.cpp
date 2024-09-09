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
	 * 		Name   -> Function EventShopProductBox_Label.EventShopProductBox_Label_C.SetLabel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsPickUp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FString                                      LabelText                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Label_C::SetLabel(bool IsPickUp, const class FString& LabelText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Label.EventShopProductBox_Label_C.SetLabel");
		
		UEventShopProductBox_Label_C_SetLabel_Params params {};
		params.IsPickUp = IsPickUp;
		params.LabelText = LabelText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function EventShopProductBox_Label.EventShopProductBox_Label_C.OnBtnSelected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UEventShopProductBox_Item_C*                 item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UEventShopProductBox_Label_C::OnBtnSelected__DelegateSignature(class UEventShopProductBox_Item_C* item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EventShopProductBox_Label.EventShopProductBox_Label_C.OnBtnSelected__DelegateSignature");
		
		UEventShopProductBox_Label_C_OnBtnSelected__DelegateSignature_Params params {};
		params.item = item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEventShopProductBox_Label_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEventShopProductBox_Label_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass EventShopProductBox_Label.EventShopProductBox_Label_C");
		return ptr;
	}

}


