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
	 * BlueprintGeneratedClass BP_P012HUDComponent.BP_P012HUDComponent_C
	 * Size -> 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
	 */
	class UBP_P012HUDComponent_C : public USBClassHUDComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UP012HUDGlitter_C*                                   HUDGlitter;                                              // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GlitterModeUIVisibility;                                 // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_1BWH[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USBPCRebellionComponent*                             AsSBPCRebellionComponent;                                // 0x00E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateDependent();
		ESBUIType GetUIType();
		void OnUpdateLayoutView();
		void OnRemoveUI();
		void OnCreateUI();
		void OnUpdate();
		void OnUnbind();
		void OnBind();
		void SetGlitterModeUIVisibility(bool Visible);
		void UpdateGlitterModeUI();
		void CustomEvent(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
		void CustomEvent_2(bool bIsShow);
		void BindUIVisibleSettingChange();
		void BindOnChangeShowAlwaysHUD();
		void UnbindOnChangeShowAlwaysHUD();
		void UnbindUIVisibleSettingChange();
		void ReceiveTick(float DeltaSeconds);
		void ExecuteUbergraph_BP_P012HUDComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
