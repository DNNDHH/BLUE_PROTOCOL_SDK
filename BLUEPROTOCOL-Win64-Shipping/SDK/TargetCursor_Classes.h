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
	 * WidgetBlueprintGeneratedClass TargetCursor.TargetCursor_C
	 * Size -> 0x0030 (FullSize[0x02D0] - InheritedSize[0x02A0])
	 */
	class UTargetCursor_C : public USBTargetCursorWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ActiveCursor;                                            // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class ASBPlayerCharacter*                                  PlayerCharacter;                                         // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class USBTargetableComponent*                              TargetableComponentBP;                                   // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FLinearColor>                                MarkerColorTbl;                                          // 0x02C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void isTargetInvincible(bool* OutIsInvincible);
		void GetNearRange(float* OutIsRange);
		void ColorChange();
		void isTargetNear(bool* OutIsNear);
		void UpdatePosition();
		void VisibleSettingChangeDelegate(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void Construct();
		void Destruct();
		void OnPlayLockOnSe();
		void ExecuteUbergraph_TargetCursor(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
