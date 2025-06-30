// Fill out your copyright notice in the Description page of Project Settings.


#include "Interaction/Inv_HighlightableStaticMeshComponent.h"

void UInv_HighlightStaticMeshComponent::Highlight_Implementation()
{
	SetOverlayMaterial(HighlightMaterial);
}

void UInv_HighlightStaticMeshComponent::UnHighlight_Implementation()
{
	SetOverlayMaterial(nullptr);
}
