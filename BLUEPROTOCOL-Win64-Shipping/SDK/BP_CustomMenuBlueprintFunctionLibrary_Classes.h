#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_CustomMenuBlueprintFunctionLibrary.BP_CustomMenuBlueprintFunctionLibrary_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_CustomMenuBlueprintFunctionLibrary_C : public UBlueprintFunctionLibrary
	{
	public:
		void CreateCustomMenuDialogYesNo(const class FText& Message, const class FScriptDelegate& EndDynamicDelegate, class UObject* __WorldContext, class UBP_Dialog_C** OutDialog);
		void CreateCustomMenuDialog(const class FText& Message, class UObject* __WorldContext, class UBP_Dialog_C** OutDialog);
		class FText GetUseConfirmDialogText(const struct FOwnItemInfo& SelectWeapon, class UObject* __WorldContext);
		void GetAbilityEffectID(int32_t ItemId, class UObject* __WorldContext, int32_t* AbilityEffectId);
		void GetAbilityEffectValue(int32_t AbilityEffectId, class UObject* __WorldContext, int32_t* Perk1ValueMin, int32_t* Perk1ValueMax, int32_t* Perk2ValueMin, int32_t* Perk2ValueMax, int32_t* RarityMin, int32_t* RarityMax);
		void IsSameAbilityEffectValueAbilityEffectID(int32_t AbilityEffectId, class UObject* __WorldContext, bool* Result);
		void IsSameAbilityEffectValueMinMax(int32_t ValueMin, int32_t ValueMax, class UObject* __WorldContext, bool* Result);
		void IsInvalidAbilityEffectValueAbilityEffectID(int32_t AbilityEffectId, class UObject* __WorldContext, bool* Result);
		void IsInvalidAbilityEffectValueMinMax(int32_t ValueMin, int32_t ValueMax, class UObject* __WorldContext, bool* Result);
		void IsInvalidAbilityEffectValue(int32_t Value, class UObject* __WorldContext, bool* Result);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
