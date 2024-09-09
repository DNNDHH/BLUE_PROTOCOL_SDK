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
	 * 		Name   -> Function RewardIconItem.RewardIconItem_C.SetRewardData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSBMasterReward                             InMasterReward                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		int32_t                                            SwitchId                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URewardIconItem_C::SetRewardData(const struct FSBMasterReward& InMasterReward, int32_t SwitchId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RewardIconItem.RewardIconItem_C.SetRewardData");
		
		URewardIconItem_C_SetRewardData_Params params {};
		params.InMasterReward = InMasterReward;
		params.SwitchId = SwitchId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URewardIconItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URewardIconItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RewardIconItem.RewardIconItem_C");
		return ptr;
	}

}


