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
	 * 		Name   -> Function PartyMemberList_ContentsLabel.PartyMemberList_ContentsLabel_C.SetContentsType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		E_PartyListPartyType                               InPartyType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPartyMemberList_ContentsLabel_C::SetContentsType(E_PartyListPartyType InPartyType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PartyMemberList_ContentsLabel.PartyMemberList_ContentsLabel_C.SetContentsType");
		
		UPartyMemberList_ContentsLabel_C_SetContentsType_Params params {};
		params.InPartyType = InPartyType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPartyMemberList_ContentsLabel_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartyMemberList_ContentsLabel_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PartyMemberList_ContentsLabel.PartyMemberList_ContentsLabel_C");
		return ptr;
	}

}


